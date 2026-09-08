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
      string s ="abcdefghijklmnopqrstuvwxyz";
      map<char,int> mp;
      for(int i=0;i<s.size();i++)
      {
        mp[s[i]] =0;
      }
      vector<int>v(n);
      for(int i=0;i<n;i++)
      {
        cin >> v[i];
        for(auto value :mp )
        {
            if(value.second== v[i])
            {
                cout << value.first;
                mp[value.first]++;
                break;
            }
        }
      }
      cout << endl;

   }
   return 0;
}