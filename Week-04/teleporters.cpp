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
       long long c;
       cin >>  n >> c;
       vector<int> v(n);
       for(int i=0;i<n;i++)
       {
        cin >> v[i];
        v[i] += (i+1);
       }
       sort(v.begin(),v.end());
       int answer =0;
       long long sum=0;
       for(int i=0;i<n;i++)
       {
        if(sum+v[i] > c)
            break;
        sum += v[i];
        answer ++;
       }
       cout << answer << endl;
   }
   return 0;
}