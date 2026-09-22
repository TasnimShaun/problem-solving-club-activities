#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n, k, sum = 0;
        cin >> n >> k;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
         {
            cin >> v[i];
            sum += v[i];  
        }

        if(sum < n) {
            cout << "NO" << endl;
            continue;
        }

        int remain = sum - n;
        int child = k;
        if(remain > n * child)
         {
            cout << "NO" << endl;
            continue;
        }

        vector<int> choco(n, 1);
        int add = remain / n;
        int extra = remain % n;
        
        for(int i = 0; i < n; i++)
         {
            choco[i] += add;
            if(i < extra) 
            {
                choco[i] += 1;
            }
        }

        int mx = *max_element(choco.begin(), choco.end()); 
        int mn = *min_element(choco.begin(), choco.end());  
        
        if((mx - mn) <= k)
         {
            cout << "YES" << endl;
        } else 
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}