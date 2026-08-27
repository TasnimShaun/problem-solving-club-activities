#include<bits/stdc++.h>
using namespace std;
map<long long int  ,long long int  >mp;
long long int  max_coin( long long int  n)
{
    if(n<=3)
    return 1;

    if(mp.count(n))
    return mp[n];
    long long value = n/4;
    mp[n] = max_coin(value) +max_coin(value);
    return mp[n];

}
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while(t--)
   {
    long long int  n;
    cin >> n;
     cout <<  max_coin(n)<< endl;
   }
    return 0;
}