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
       int n,q;
   cin >> n >> q;
   vector<int > v(n);
   for(int i=0;i<n;i++)
   {
    cin >> v[i];
   }
   vector< long long  > pre(n);
   pre[0] = v[0];
   for(int i=1;i<n;i++)
   {
     pre[i] = pre[i-1] +v[i];
   } 
   vector<int> x(n);
   x[0] = v[0];
   for(int i=1;i<n;i++)
   {
    x[i] = max(x[i-1],v[i]);

   }
   while(q--)
   {
    int k;
    cin >> k;
    int l=0, r= n-1, ans=-1;
    while(l <= r)
    {
        int mid = (l+r) /2;
        if(x[mid] <=k)
        {
            ans = mid;
            l = mid+1;
        }
        else 
        {
            r = mid -1;
        }
    }
    if( ans == -1)
    {
        cout << 0 << " ";
    }
    else 
    {
        cout << pre[ans] << " ";
    }

   }
   cout << endl;
   }
   return 0;
}