#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n,m,k;
   cin >> n >> m >> k;
   vector<int> size(n);
   vector<int> d_size(m);
   for(int i=0;i<n;i++)
   {
    cin >> size[i];
   }
   for(int j=0;j<m;j++)
   {
    cin >> d_size[j];
   }
   sort(size.begin(),size.end());
   sort(d_size.begin(),d_size.end());
   int l=0, r=0, count =0;
   while(l <n && r < m)
   {
    if(d_size[r] < size[l] -k)
    {
        r++;
    }
    else if( d_size[r] > size[l] + k)
    {
        l++;
    }
    else 
    {
        count ++;
        l++;
        r++;
    }
   }
   cout << count << endl;

    return 0;
}