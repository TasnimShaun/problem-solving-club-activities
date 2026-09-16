#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin >> n;
   vector<int> v(n);
   for(int i=0;i<n;i++)
   {
    cin >> v[i];
   }
   for(int i=0;i<n;i++)
   {
    if( v[i]> 0)
    {
        v[i]=1;
    }
    else if(v[i]<0)
    {
        v[i]= 2;
    }
    else 
    v[i]=0;
   }
   for( int i : v)
   {
    cout << i << " ";
   }
    return 0;
}