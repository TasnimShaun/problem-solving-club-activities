#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   long long k;
   cin >> n >> k;
   vector< long long > v(n);
   for(int i =0;i<n;i++)
   {
    cin >> v[i];
   }
   int l =0, r =0;
    long long answer =0;
    multiset<long long> mult;
    while(r<n)
    {
        mult.insert(v[r]);
        long long   min = *mult.begin();
        long long  mx = *mult.rbegin();
        if((mx - min) <= k)
        {
            answer += (r-l+1);
        }
        else
        {
            while( l<= r)
            {
                min = *mult.begin();
                mx = *mult.rbegin();
                if((mx - min) <= k)
                {
                    break;
                }
                
                mult.erase(mult.find(v[l]));
                l++;
            }
                min = *mult.begin();
                mx = *mult.rbegin();
            if((mx - min) <= k)
                {
                   answer += (r-l+1);

                }
        }
        r++;
    }
    cout << answer << endl;
    return 0;
}
// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F