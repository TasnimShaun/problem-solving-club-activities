#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while(t--)
   {
       ll a,b,n,s;
       cin >> a >> b >> n >> s;
       int x =min(s/n,a);
        int remain = s- n*x;
        if( remain <=b)
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout <<"NO" << endl;
        }


   }
   return 0;
}
// https://codeforces.com/problemset/problem/1256/A