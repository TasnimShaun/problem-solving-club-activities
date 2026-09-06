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
        long long n ;
        cin >> n;
        string s;
        cin >> s;
        vector< long long > v;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '1')
            {
                v.push_back(1);
            }
            else
            {
                v.push_back(0);
                while(s[i] == '0' && i<n)
                {
                    i++;
                }
                if(s[i] =='1')
                {
                    v.push_back(1);
                }
            }
        }
        long long one =0, zero=0;
        for( auto x : v)
        {
            if ( x==1)
            {
               one++; 
            }
            else{
                zero++;
            }
        }
        if( one > zero)
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
   }
   return 0;
}
// https://codeforces.com/contest/1988/submission/320414562