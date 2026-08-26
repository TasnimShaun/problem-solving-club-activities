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
        string s;
        cin >> s;
        string a = s.substr(0,s.length()-2) + "i";
        cout << a << endl;

    } 
    return 0;
}