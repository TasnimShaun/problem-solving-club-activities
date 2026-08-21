#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int a,b,t;
   cin >> a >> b >> t;
   int biscuit = (t+.5)/a;
   int total_biscuit = b* biscuit;
   cout << total_biscuit << endl;
    return 0;
}