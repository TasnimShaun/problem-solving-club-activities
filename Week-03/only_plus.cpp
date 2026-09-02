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
    int a,b,c;
    cin >> a >> b >> c;
    int maximum_amount =0;
    for(int i=0;i<=5;i++)
    {
        for(int j =0;j<=5-i;j++)
        {

         int k = 5-i-j;
         int new_a = a+i;
         int new_b = b+j;
         int new_c = c+k;
         int amount = new_a * new_b * new_c;
         maximum_amount = max(maximum_amount,amount);
        }
    }
    cout << maximum_amount << endl;
}
    return 0;
}