#include<bits/stdc++.h>
#define ll long long 
using namespace std;

 int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int  t;
   cin >> t;
   while(t--)
   {
    int   n;
    cin >> n;
    vector<ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    long long  sum =0;
    for(ll x : v)
    {
        sum += llabs(x);
    }
    ll negative =0;
    bool isNegative = false;
    for(int i=0;i<n;i++)
    {
        if(v[i]<0)
        {
            if(!isNegative)
            {
                negative++;
                isNegative = true;
            }
        }
        else if(v[i] != 0)
        {
           isNegative = false;
        }
    }
    cout << sum <<  " "  << negative << endl;
   }
    return 0;
}
  
  // https://codeforces.com/problemset/problem/1843/B