#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
     {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int>mp;
        for( char c : s)
        {
            if(c == 'A' || c =='B' || c =='C' || c == 'D')
            {
                mp[c]++;
            }
        }
        int  score =0;
        for( auto it : mp)
        {
            score += min( it.second, n);
        }
        cout << score << endl;
    }
       
    return 0;
}