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
        int n, k;
        cin >> n >> k;
        string s, answer;
        vector<string> v;
        for(int i = 0; i < n; i++)
        {
            cin >> s;
            if(i % k == 0)
            {
                for(int j = 0; j < s.size(); j += k)
                {
                    answer.push_back(s[j]);
                }
                v.push_back(answer);
                answer.clear();
            }
        }
        for(auto it : v)
        {
            cout << it << endl;
        }
    }
    return 0;
}
