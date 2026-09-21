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
       int n,x;
       cin >> n >> x;
       string s;
       cin >> s;
       int swip =0;
       bool right = true;
       for( char c : s)
       {
        if( c == '1')
        {
            swip = x;
        }
        else if( c =='0')
        {
            if( swip == 0)
            {
                right = false;
                break;
            }
            swip--;
        }
       } 
       if(right)
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