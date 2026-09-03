#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int  s,k;
   cin >> s >> k;
   vector<int> v(s+1),count(s+1);
   for(int i=1;i<=s;i++)
   {
    cin >> v[i];
   } 
   set<int> st;

   for(int i=s;i>=1;i--)
   {
    st.insert(v[i]);
    count[i]= st.size();
   }
   for(int i=1;i<=k;i++)
   {
    int pos;
    cin >> pos;
    cout << count[pos] << endl; ;
   }
    return 0;
}