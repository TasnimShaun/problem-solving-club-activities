#include<bits/stdc++.h>
using namespace std;
const int maxn = (1LL << 15);
vector<int> allpalinedrom;
bool ispalinedrom (int x)
{
   string s = to_string(x);
   int length = s.size();
   for(int i=0;i<length / 2 ;i++)
   {
      if(s[i] != s[length - i-1])
      {
         return false ;
      }
   }
   return true;
}
void makepalinedrome()
{
   for(int i=0;i<maxn;i++)
   {
      if(ispalinedrom(i))
      {
         allpalinedrom.push_back(i);
      }
   }
}

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   makepalinedrome();

   int t;
   cin >> t;
   while(t--)
   {
      int n;
      cin >> n;
      vector<int> v(n), count(maxn +1);
      for( int i=0;i<n;i++)
      {
         cin >> v[i];
         count[v[i]]++;
      }  
      long long answer =n;
      for(int i=0;i<n;i++)
      {
         for(int j=0;j < allpalinedrom.size();j++)
         {
            int current = (v[i] ^ allpalinedrom[j]);
            answer += count[current];
         }
      } 
      cout << (answer / 2) << endl;
   }
   return 0;
}