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
       int  n;
       cin >> n;
       vector<int>v(n);
       int cnA =0,cnB =0;
       for(int i=0;i<n;i++)
       {
        cin >> v[i];
        if(v[i]== 1)
        {
            cnA++;
        }
        else 
        {
            cnB++;
        }
        
       }
       int maximum = min(cnA,cnB);
       cout << maximum << endl;

   }
   return 0;
}