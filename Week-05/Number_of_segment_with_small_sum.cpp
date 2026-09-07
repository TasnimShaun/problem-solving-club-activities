#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   long long k;
   cin >> n >> k;
   vector <long long > v(n);
   for(int i=0;i<n;i++)
   {
    cin >> v[i];
   }
   int l=0,r=0;
   long long  answer=0, sum=0;
   while(r<n)
   {
    sum += v[r];
    if(sum <= k)
    {
        answer+= (r-l+1);
    }
    else 
    {
        while(sum > k && l<r)
        {
            sum -= v[l];
            l++;
        }
        if(sum <= k)
        {
            answer += (r-l+1);
        }
    }
    r++;

   }
   cout << answer << endl;

    return 0;
}