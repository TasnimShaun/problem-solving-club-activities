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
        int m= (n*n-n) /2;
        vector<int > v(m);

        for(int i=0;i<m;i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        vector<long long> b(n);
        int x=1,index =0;
        int bTa = n-x;
        while( n-x >0)
        {
            b[index++] = v[bTa-1];
            x++;
            bTa += (n-x);
        }
         b[n - 1] = b[n - 2];
         
        for(int i=0;i<n;i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
   }
   return 0;
}