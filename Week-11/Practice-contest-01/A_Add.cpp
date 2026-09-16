#include<bits/stdc++.h>
using namespace std;
int sum(int i, int j)
{
    int result = i+j;
    return result;
}
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int x,y;
   cin >> x >> y;
   cout << sum(x,y) << endl;
    return 0;
}