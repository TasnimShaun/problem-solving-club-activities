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
        string s = ".";
        for(int i=0;i<n;i++)
        {
            s += "BAN";
        }
        n = s.size()-1;
        vector< pair <int,int>> answer;
        int l=2, r=n;
        while(l<r)
        {
            answer.push_back({l,r});
            swap(s[l],s[r]);
            l+=3;
            r-=3;
        }
        cout << answer.size() << endl;
        for(auto st : answer)
        {
            cout << st.first << " " << st.second << endl;
        }
   }
   return 0;
}