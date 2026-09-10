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
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    set<int> keep;

    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++)
         {
            if (v[j] < v[i]) 
            {
                keep.insert(j);  
            }
        }
    }

    cout << keep.size() << endl;
   }
   return 0;
}