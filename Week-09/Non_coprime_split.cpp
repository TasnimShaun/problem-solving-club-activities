#include<bits/stdc++.h>
using namespace std;
int find_div(int n)
{
   for(int i=2;i*i<=n;i++)
   {
      if(n%i == 0)
      {
         return i;
      }
      
   }
   return n;
}
void solve ()
{
   long long l, r;
   cin >> l >> r ;
   if(l<=3 && r <= 3)
   {
      cout << -1 << endl;
      return;
   }
   if(r-l >=1)
   {
      if( r%2)
      r--;
      cout << r/2 << " " << r/2 << endl;
      return;
   }
   if(find_div(l)== l)
   {
      cout << -1 << endl;
   }
   else 
   {
      cout << find_div(l) << " " << l-find_div(l) << endl;
   }
}

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while(t--)
   { 
     solve();
        
   }
   return 0;
}
// https://codeforces.com/contest/1872/submission/328403523