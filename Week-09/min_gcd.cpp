#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);

        ll mn_i = 0;
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] < v[mn_i]) {
                mn_i = i;
            }
        }

        ll gcd = 0;
        for (ll i = 0; i < n; i++) {
            if (i != mn_i && v[i] % v[mn_i] == 0) {
                gcd = __gcd(gcd, v[i]);
            }
        }

        if (gcd == v[mn_i]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
// https://codeforces.com/contest/2084/submission/328408295