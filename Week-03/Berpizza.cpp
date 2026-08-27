#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n, cs =1;;
   cin >> n;
   set<pair<int,int>> s;
   multiset<pair< int,int>> mls;
   vector<int> answer;
   for(int i=0;i<n;i++)
   {
    int x;
    cin >> x;
    if( x == 1)
    {
        int money;
        cin >> money;
        s.insert({cs,money});
        mls.insert({money,-cs});
        cs++;
    }
    else if(x==  2)
    {
        int pos = s.begin()->first,money = s.begin()->second;
        answer.push_back(pos);
        s.erase(s.begin());
        mls.erase({money,-pos});

    }
    else
    {
        int pos = -mls.rbegin()-> second, money = mls.rbegin()->first;
        answer.push_back(pos);
        mls.erase(--mls.end());
        s.erase({pos,money});
    }
   }
   for(auto value : answer)
   {
    cout << value << " ";
   }
    cout << endl;
   

    return 0;
}