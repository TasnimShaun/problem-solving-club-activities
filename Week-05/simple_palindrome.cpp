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
    string s ="aeiou";
    long long n;
    cin >> n;
    long long have = n/5;
    vector< char> c;
    for(int i=0;i<have;i++)
    {
        for(int j=0;j<5;j++)
        {
            c.push_back(s[j]);
        }
    }
    long long left = n%5;
    if( left !=0)
    {
        for(int i=0;i<left;i++)
        {
            c.push_back(s[i]);
        }
    }
    sort(c.begin(),c.end());
    for( auto ch : c)
    {
        cout << ch;
    }
   cout <<   endl;

         
   }
   return 0;
}