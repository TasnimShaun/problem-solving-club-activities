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
    int n,k;
    cin >> n >> k;
    vector<long long > v(n);

    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
     long  long x = LLONG_MAX;
     bool poss = false;
     for(int  i =0;i<n;i++)
     {
        if( v[i] >= k)
        {
            
            x = min(x, v[i] % k);
            poss = true;
        }
     }
     if(poss)
     {
        cout << x << endl;
     }
     else 
     cout << -1 << endl;

   }
    return 0;
}