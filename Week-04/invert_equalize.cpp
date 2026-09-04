#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >>t;
   while(t--)
   {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int one = 0, zero =0;
    char c = 'x';
    for( int i=0;i<n;i++)
    {
       
        if( s[i] != c)
        {
        if( s[i] == '0')
        {
            zero++;
        }
        else
        {
            one++;
        }
        c = s[i];
        } 
    }
    cout << min(zero,one) << endl;
   }
    return 0;
}