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
    int n,k;
    cin >> n >> k;
    int give=0;
    int have=0;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    for(int i=0;i<n;i++)
    {
        if(v[i] >=k)
        {
        have += v[i];
        }
        else if(v[i] == 0 && have > 0)
        {
            have --;
            give ++;
        }
    }
    cout << give << endl;
   }

    return 0;
}