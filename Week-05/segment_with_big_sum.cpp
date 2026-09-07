#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   long long k;
   cin >> n >> k;
   vector<int> v(n);
   for(int i=0;i<n;i++)
   {
     cin >> v[i];
   }
   int l=0,r=0,answer =INT_MAX;
    long long sum=0;
   
      while(r<n)
      {  
        sum+=v[r];

        while(sum>=k)
        {
            answer = min(answer, r-l+1);
           sum -=v[l];
            l++;
        }
        r++;
      }
      if(answer == INT_MAX)
      cout << -1 << endl;
      else{
        cout << answer << endl;
      }
    return 0;
}
// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B