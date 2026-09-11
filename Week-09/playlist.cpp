#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin >> n;
   vector<int> v(n);
   for(int i=0;i<n;i++)
   {
     cin >> v[i];
   }
   set <int > st;
   int length=0;
   int start =0;
   int end;
   for( end =0;end<n;end++)
   {
    while(st.count(v[end]))
    {
        st.erase(v[start]);
        start++;
    }
    st.insert(v[end]);
    length = max(length, end-start+1);
   }
   cout << length << endl;
    return 0;
}
// https://cses.fi/problemset/result/13815469/