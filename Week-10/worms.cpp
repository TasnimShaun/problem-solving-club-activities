#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin >> n;
   vector<int > v(n);
   for(int i=0;i<n;i++)
   {
    cin >> v[i];
   }
   vector< int > pre(n);
   pre[0] = v[0];
   for(int i=1;i<n;i++)
   {
     pre[i] = pre[i-1] +v[i];
   }
   int m;
   cin >> m;
   while(m--)
   {
      int wrm ;
      cin >> wrm;
       int l =0, r=n-1, ans = -1;
        while( l <= r)
        {
            int mid = (l+r)/2;
            if( wrm <= pre[mid])
            {
                ans =mid;
                r=mid-1;
            }
    
            else
            {
                l = mid+1;
            }
            
        }
        cout <<( ans+1) << endl;

   }
    return 0;
}