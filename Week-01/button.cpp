#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
     cin >> a >> b;
     int count=0;
     if(a<b)
     swap(a,b);
     count = a;
     a--;
     count += max(a,b);
     cout << count;


    return 0;
}
// https://atcoder.jp/contests/abc222/submissions/64206546
