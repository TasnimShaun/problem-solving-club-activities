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
        string s, r;
        cin >> s >> r;
        if( s==r || s[0]=='1')
        {
            cout <<"YES" << endl;
            continue;
        }
        int position =-1;
        for(int i=0;i<n;i++)
        {
            if(s[i]== '1')
            {
                position =i;
                break;
            }
        }
        if(position != -1)
        {   bool right = true;
             for( int i=0;i<n;i++)
             {
                 if(s[i] != r[i])
                 {
                    if( position > i)
                    {
                        right = false;
                        break;
                    }
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
        else 
        {
             cout << "NO" << endl;
        }
       
   }
   return 0;
}
// https://codeforces.com/contest/1994/submission/319291916