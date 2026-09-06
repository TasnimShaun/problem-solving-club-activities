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
       vector<int > v(n);
       for(int i=0;i<n;i++)
       {
        cin >> v[i];
       } 
       sort(v.begin(), v.end());
       int mini = v[0];
       int maxv = v[n-1];
       int score = (n-1) * ( maxv - mini);
       cout << score << endl;
       
   }
   return 0;
}