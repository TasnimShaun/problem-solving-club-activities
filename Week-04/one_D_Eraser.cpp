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
     int n, k,l=0;
     cin >> n >> k;
     string s;
     cin >> s;
     int answer =0;
     while(l<n)
     {
        if(s[l] == 'B')
        {
            answer++;
            l+=k;
        }
        else{
            l++;
        }
     }
     cout << answer << endl;

   }
    return 0;
}