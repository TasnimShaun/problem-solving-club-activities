#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    int n;
    cin >> n;

    vector<int> a(n);
    unordered_set <int>  s;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        s.insert(a[i]); 
    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (s.find(a[i] + 1) != s.end()) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
