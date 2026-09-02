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
        vector<int> v;
        for (int i = 1; i <= n; i++) {
            v.push_back(i);
        }
        vector<pair<int, int>> steps;
        while (v.size() > 1) {
            sort(v.begin(), v.end()); 
            int a = v.back(); v.pop_back();
            int b = v.back(); v.pop_back();
            steps.push_back({b, a});
            int avg = (a + b + 1) / 2;
        }
        cout << v[0] << endl;
        for (auto p : steps) {
            cout << p.first << " " << p.second << endl;
        }
    } 
   
   return 0;
}