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
        long long n,k;
        cin >> n >> k;
        vector< long long > v(n);
        for( int i=0;i<n;i++) cin >> v[i];

        vector< long long > b(n);
        for( int i=0;i<n;i++) cin >> b[i];
        long long  currnt = v[0];
        long long answer=0;
        int l=0,r=1;
        if(currnt<=k)
        {
            answer =1;
        }
        while(r < n)
        {
            if(b[r-1]% b[r]==0)
            {
                currnt += v[r];
            }
            else
            {
                currnt = v[r];
                l=r;
            }
            while (currnt > k)
            {
               currnt -= v[l++]; 
            }
            answer = max(answer,1LL* (r-l+1));
            r++;
            
        }
            cout << answer << endl;
   }
   return 0;
}
