#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   long long l, r;
   cin >> l >> r;
   long long c = (r-l+1)/2;
   if(c==0)
   {
     cout <<"NO" << endl;
   }
   else
   {
    cout <<"YES" << endl;
    long long i =l;
    while( c>0)
    {
        cout << i << " " << i+1 << endl;
        i += 2;
        c--;
    }
   }
   
    return 0;
}
//https://codeforces.com/contest/1051/submission/322709230