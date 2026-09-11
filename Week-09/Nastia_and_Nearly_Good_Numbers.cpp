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
       long long a,b;
       cin >> a >> b;
       long long x,y,z;
       
       if(b== 1)
       {
        cout << "NO" << endl;
        continue;
       }
       else if( b == 2)
       {
        cout << "YES" << endl;
        if( a == 1)
        {
            cout << 3 << " " << 1 << " " << 4 << endl;
        }
        else
        {
            b *= a;
            z = a*b;
            b--;
            x= a*b;
            y=a;
            cout << x <<" " <<  y << " " << z << endl;
        }
       }
       else 
       {
        cout << "YES" << endl;
        z = a*b;
        b--;
        y = a*b;
        x = a;
         cout << x << " " << y << " " << z << endl;
       }
   }
   return 0;
}