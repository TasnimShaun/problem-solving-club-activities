#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

    int n;
    cin >> n;
     vector< long long > v(n);
     long long total =0;
     for( int i=0;i<n;i++)
     {
        cin >> v[i];
        total += v[i];
     }

        long long min_diff = LLONG_MAX;

         for( int x =0 ; x < (1 << n); x++)
         {
            long long group1 =0;
            for( int i =0;i<n;i++)
            {
                if( x & (1 << i))
                {
                    group1 += v[i];
                }
            }
            long long group2 = total -  group1;
            long long diff = abs(group1- group2);
             min_diff = min (min_diff, diff);
         }
          cout << min_diff << endl;

   
    return 0;
}