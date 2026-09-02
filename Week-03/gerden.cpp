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
    int n, k,d;
    cin >> n >> k >> d;
    vector<int>v(n);
    for(int i =0;i<n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int max=0;
    int ti=0;
    int p =0;
    int a = n-k;
    while(1)
    {
        if(ti +v[p] >d)
        break;
        ti+=v[p];
        max++;
        p=(p+1) % a;

    }
    cout << max << endl;
}

    return 0;
}