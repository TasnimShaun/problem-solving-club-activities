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
      vector<int> v(n);
      set<int> st;
      
      for(int i = 0; i < n; i++)
      {
         cin >> v[i];
         st.insert(v[i]);  
      }

      int l = 0, r = n - 1;
      while (l < r)
      {
         int mn = *st.begin();
         int mx = *st.rbegin();
         bool removed = false;

         if (v[l] == mn || v[l] == mx)
         {
            st.erase(v[l]);
            l++;
            removed = true;
         }

         else if (v[r] == mn || v[r] == mx)
         {
            st.erase(v[r]);
            r--;
            removed = true;
         }

         if (!removed) break;
      }

      if (l >= r)
         cout << -1 << endl;
      else
         cout << l + 1 << " " << r + 1 << endl; 
   }

   return 0;
}

// https://codeforces.com/problemset/problem/1793/C