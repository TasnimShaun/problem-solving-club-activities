#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n ,k;
   cin >> n >> k;
   vector<int> v(n);
   for(int i=0;i<n;i++)
   {
    cin >> v[i];
   }
   map<int,int> count;
   int l=0, r=0;
   long long answer =0;
   int unique=0;
   while(r<n)
   {
    if(count[v[r]]==0)
    {
        unique++;
    }
    count[v[r]]++;
    while(unique >k)
    {
        count[v[l]]--;
        if(count[v[l]]==0)
        {
            unique--;
        }
        l++;
    }
    answer += (r-l+1);
    r++;


   }
   cout << answer << endl;


    return 0;
}
//https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/E