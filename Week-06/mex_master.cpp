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
        int zero =0;
         int nonZero =0;
        for(int i=0;i<n;i++)
        {
            if(v[i] !=0)
            nonZero++;
            else 
            zero++;
        }
        int answer =0;
        if(zero == 0)
        {
            answer =0;
        }
        else
        {
            if( nonZero >= zero-1)
            {
                answer =0;
            }
            else{
                int maxi = *max_element(v.begin(),v.end());
                if(maxi == 1)
                {
                    answer = 2;
                }
                else 
                {
                    answer =1;
                }

            }
        }
        cout << answer << endl;


   }
   return 0;
}
// https://codeforces.com/contest/1806/submission/319539516