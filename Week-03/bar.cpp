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
    int n;
    string  s;
    cin >> n >> s;
    int boy=0,girl=0,count=0;
     for(char ch : s)
     {
        if(ch =='B')
        {
            boy++;
        }
         else if(ch =='G')
        {
            girl++;
        }
        count++; 
        if(boy >2* girl)
        {
            break;
        }
      
             
     }
     
     cout << count << endl;
   }
    return 0;
}