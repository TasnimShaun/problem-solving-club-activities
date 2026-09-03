#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
    cin >> n;
    multiset<int>mset;
    for(int i =0;i<n;i++ )
    {
        int x;
        cin >> x;
        mset.insert(x);
    }
    int answer =0,problem = 1;
    while(! mset.empty())
    {
        auto lowerb = mset.lower_bound(problem);
        if(lowerb != mset.end())
        {
            answer++;
            mset.erase(lowerb);
        }
        else
        {
        break;
        }
        problem++;
    }
    cout << answer << endl;
    return 0;
}