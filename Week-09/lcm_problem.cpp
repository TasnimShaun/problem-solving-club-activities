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
     long long int l,r ;
     cin >> l  >> r;
     if(l*2 <= r)
     {
        cout << l << " "<< 2*l << endl;
     }
     else 
     {
        cout << -1 << " " << -1 << endl;
     }

   }
   return 0;
}
//https://cses.fi/problemset/result/13815521/