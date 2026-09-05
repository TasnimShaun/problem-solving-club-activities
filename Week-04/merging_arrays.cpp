#include<bits/stdc++.h>
using namespace std;
#define int long long 
#undef int
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n,m;
   cin >> n >> m;
   vector<int > a(n),b(m);
   for(int i=0;i<n;i++)
   {
    cin >> a[i];
   }
   for(int i=0;i<m;i++)
   {
    cin >> b[i];
   }
   vector<int> answer;
   int l =0,r=0;
   while( l<n && r<m)
   {
    if(a[l] <=b[r])
    {
        answer.push_back(a[l]);
        l++;
    }
    else
    {
        answer.push_back(b[r]);
        r++;
    }
}
    while(l<n)
    {
        answer.push_back(a[l]);
        l++;
    }
    while(r<m)
    {
        answer.push_back(b[r]);
        r++;
    }
    for(auto x : answer)
    {
       cout << x << " ";
    }
    cout << endl;
    return 0;
}