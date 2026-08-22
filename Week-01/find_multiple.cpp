#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    bool result = false;
    for(int i=a;i<=b;i++)
    {
        if(i%c == 0)
        {
           cout << i;
          result = true;
          break;
        }
       
    }
    if( !result)
     cout << -1;
    
    return 0;
}
// https://atcoder.jp/contests/abc220/submissions/64198527