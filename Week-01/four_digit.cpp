#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
     cin >> n;
     stringstream ss;
      ss << n;
      string s;
      s = ss.str();
      while(s.length() < 4)
       {
        s = '0'+ s;
       }
        cout << s;

    return 0;
}
// https://atcoder.jp/contests/abc222/submissions/64206546