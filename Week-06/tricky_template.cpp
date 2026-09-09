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
        int n;
        cin >> n;
        string a,b,c;
        cin >> a;
        cin >> b;
        cin >> c;
        bool is = false;
        for(int i=0;i<n;i++)
        {
            if(a[i] != c[i] && b[i] !=c[i])
            {
                is = true;
                break;
            }
        }
        if(is)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;

   }
   return 0;
}