#include<bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while(t--)
   {
       int n;
       cin >> n;
       vector<int> v(n);
       for(int i=0;i<n;i++)
        {
         cin >> v[i];
        } 
        int max_val = 0;
        for (int i = 0; i < n; i += 2)
         {
            if (v[i] > max_val)
             {
                max_val = v[i];
            }
        }
        cout << max_val << endl;
    }
    return 0;
   }
