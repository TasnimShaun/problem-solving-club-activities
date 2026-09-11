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
       vector< long long > v(n);
       for(int i =0;i<n;i++)
       {
        cin >> v[i];
       } 
       long long g1 =0,g2=0;
      
        for(int i=0;i<n;i += 2)
       {
        g1 = __gcd(g1,v[i]);
       }
        for(int i=1;i<n;i += 2)
       {
        g2 = __gcd(g2,v[i]);
       }
       long long answer =0;
       bool is = true;
       for(int i=1;i<n;i+= 2)
       {
            if(v[i] % g1== 0 )
            {
                 is = false;
            }
       }
       if(is)
       {
          answer = g1;
        }
        else
        {
            bool is = true;
             for(int i=0;i<n;i+= 2)
          {
            if(v[i] % g2 == 0 )
            {
                 is = false;
            }
          }
          if(is)
          {
            answer = g2;
          }
        }
        cout << answer << endl;
       
   }
   return 0;
}
// https://codeforces.com/contest/1618/submission/322414623