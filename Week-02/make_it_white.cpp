#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int first_p = -1,last_p =-1;
        for(int i=0;i<n;i++)
        {
            if( s[i] == 'B')
            {
                if(first_p == -1)
                {
                    first_p = i;
                }
                last_p = i;
            }
        }
        int l = last_p - first_p +1;
            cout << l << endl; ;
    }
    return 0;
}