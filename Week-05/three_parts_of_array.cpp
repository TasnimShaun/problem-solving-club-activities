#include<bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin >> n;
   vector<int>v(n);
   for(int i=0;i<n;i++)
   {
    cin >> v[i];
   }
   long long sum =0, sam=0,answer =0;
   int l=0, r=n-1;
   while( l<=r)
   {
     
      if(sum <sam)
      {
        
        sum += v[l];
        l++;
      }
      else 
      {
        sam += v[r];
        r--;
      }
       if(sum == sam )
      {
        answer= sum;
      }

   }
   cout << answer << endl;

     return 0;
}