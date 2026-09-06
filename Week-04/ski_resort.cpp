#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--)
   {
      ll n, k, q;
      cin >> n >> k >> q;
      vector<ll>v(n);
      for (int i = 0;i < n;i++)
      {
         cin >> v[i];
      }
      ll answer = 0, count = 0;
      for (int i = 0; i < n; i++)
      {
         if (v[i] <= q) {
            count++;
         }
         else {
            count = 0;
         }
         if (count >= k) {
            answer += (count - k + 1);
         }
      }

      cout << answer << endl;
   }

   return 0;
}