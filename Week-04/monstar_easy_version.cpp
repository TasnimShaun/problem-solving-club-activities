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
       int n; cin >> n; 
       vector<int> v(n);
       for(int i=0;i<n;i++)
       {
        cin >> v[i];
       }
        sort(v.begin(),v.end());
        long long answer =0;
        answer += (v[0]-1);
        vector<int > V(n);
         V[0] = v[0];
         int keep = 2;
         for(int i =1;i<n;i++)
         {
            if(v[i]< keep)
            {
                V[i] = v[i];
            }
            else
            {
                V[i] = keep;
                keep++;
            }
         }
         for(int i=0;i<n;i++)
         {
            answer += (v[i] -V[i]);
         }
         cout << answer << endl;
       
   }
   return 0;
}