#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin >> n;
   map<string, string> answer, given;
   for(int i=0;i<n;i++)
   {
    string a, b;
    cin >> a>> b;
    if(given.find(a)!= given.end())
    {
        string s = given[a];
        answer[s] =b;
        given.erase(a);
        given[b] =s;
    }
    else
    {
        answer[a] = b;
        given [b] = a;

    }
    

   }
   cout << answer.size() <<endl;
   for(auto [x,y] : answer)
   {
    cout << x << " "<< y << endl;
   }
     
   
    return 0;
}