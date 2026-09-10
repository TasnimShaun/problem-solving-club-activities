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
       cin>>n;
        vector<int> v(1110);
        for (int i=0; i<1110; i++) {
            cin >> v[i];
        }
        int mx_ans = INT_MIN;
        for (int i=0; i<n; i++) {
            int a = v[i];
            for (int j=i+1; j<n; j++) {
                int b = v[j];
                if (__gcd(a,b) == 1) {
                    mx_ans = max(mx_ans, i+1 + j+1);
                    if (a==1) {
                        mx_ans = max(mx_ans, (i+1)*2);
                    }
                    if (b ==1) {
                        mx_ans = max(mx_ans, (j+1)*2);
                    }
                }
            }
        }
 
        if (mx_ans == INT_MIN) {
            cout << -1 << endl; 
        } else {
            cout << mx_ans << endl;
        }
   }
   return 0;
}