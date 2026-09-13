#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
     int n;
     cin >> n;
     vector<int> v(n);
     for(int i=0;i<n;i++)
     {
      cin >> v[i];
     }
     sort(v.begin(), v.end());
     int q;
     cin >> q;
     while(q--)
     {
       int m;
       cin >> m;
       int count = upper_bound(v.begin(), v.end(), m) - v.begin();
       cout << count << endl; 
     }
   
    return 0;
}