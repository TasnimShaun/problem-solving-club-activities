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
        int n , a,b;
        cin >> n >> a >> b;
        int win = abs(a-b)-1;
        if(win % 2 == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}