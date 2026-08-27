#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string p, s;
        cin >> p >> s;

        int a = 0, b = 0;
        bool v = true;

        while (a < p.length() && b < s.length()) {
            if (p[a] == 'L') {
                if (s[b] == 'L') {
                    b++;
                    if (b < s.length() && s[b] == 'L') {
                        b++;
                    }
                } else {
                    v = false;
                    break;
                }
            } else if (p[a] == 'R') {
                if (s[b] == 'R') {
                    b++;
                    if (b < s.length() && s[b] == 'R') {
                        b++;
                    }
                } else {
                    v = false;
                    break;
                }
            }
            a++;
        }

        if (v && a == p.length() && b == s.length()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
