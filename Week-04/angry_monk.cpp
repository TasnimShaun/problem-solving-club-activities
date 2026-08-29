#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> v(k);
        for (int i = 0; i < k; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        long long  answer = n -v[k-1];
        for(int i=0;i<k-1;i++)
        {
        	    answer += ( v[i]-1);
              
        }
        cout << answer  << endl;
    }

    return 0;
}