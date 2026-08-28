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
        string s;
        cin >> s;
        int n= s.size();
        int index= n-1;
        int answer =0;
        for(int i= n-1; i>=0;i--)
        {
            int number = s[i] -'0';
            if( number >=1)
            {
                index =i;
                break;
            }
            else
            {
                answer++;
            }
        }
        for(int i=0;i<index;i++)
        {
            if(s[i] != '0')
            {
                answer++;
            }
        }
        cout << answer << endl;
   }
   return 0;
}