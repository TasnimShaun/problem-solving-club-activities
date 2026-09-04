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
        long long  a ,b,n;
        cin >> a >> b >> n;
        vector<long long > v(n);
        
        long long sum=0;
        if(b>=a)
        {
         sum=a;
         b=a;
        }
        else{
         sum=b;
        }
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            if(v[i]+1 <=a)
            {
               sum += v[i];
            }
            else
            {
               sum += a-1;
            }
        }
        cout << sum << endl;
         

   }
   return 0;
}
 // https://codeforces.com/problemset/problem/1875/A