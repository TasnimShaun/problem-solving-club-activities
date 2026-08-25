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
    string s;
     cin >> n >> s;
     set< char > st(s.begin(),s.end());
     vector< char > v(st.begin(),st.end());
     map< char, char> mp;
     int sze = v.size();
     for(int i=0;i<sze;i++)
     {
        mp[v[i]] = v[sze-i-1];
     }
     for(char ch : s)
     {
        cout << mp[ch];
     }
     cout << endl;
    
   }
    return 0;
}