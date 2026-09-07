#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n + 1); 
        string s;
        for (int i = 1; i <= n; ++i)
            cin >> v[i];

        cin >> s;
        s = " " + s; 

        vector<long long> prefix(n + 1, 0);

        
        for (int i = 1; i <= n; i++) {
            prefix[i] = prefix[i - 1] + v[i];
        }

        long long max_point = 0;
        int l = 1, r = n;

       
        while (l < r) {
           
            while (l <= n && s[l] != 'L') 
            l++;
            while (r >= 1 && s[r] != 'R') 
            r--;

            if (l < r) {
                max_point += prefix[r] - prefix[l - 1];
                s[l] = '.'; s[r] = '.';
                l++;
                r--;
            }
        }

        cout << max_point << endl;
    }

    return 0;
}
 
// https://codeforces.com/contest/2000/problem/D