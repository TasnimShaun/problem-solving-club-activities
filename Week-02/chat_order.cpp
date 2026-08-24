#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin >> n;
   set<string>st;
   vector<string> v(n);
   for(int i=0;i<n;i++)
   {
    cin >> v[i];
   }
   vector<string> result;
   for(int i=n-1;i>=0;i--)
   {
    if(st.find(v[i]) == st.end())
    {

        st.insert(v[i]);
        result.push_back(v[i]);
    }
   }

   for( string s : result)
   {
    cout << s << endl;
   }

    return 0;
}