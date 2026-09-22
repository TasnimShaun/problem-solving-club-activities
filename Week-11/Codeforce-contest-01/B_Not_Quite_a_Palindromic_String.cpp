
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        int existing_pairs = 0;
        for (int i = 0; i < n / 2; ++i) {
            if (s[i] == s[n - 1 - i]) {
                existing_pairs++;
            }
        }
        if (existing_pairs == k) {
            cout << "YES\n";
        } else if (existing_pairs < k) {
            int needed = k - existing_pairs;
            if (needed <= (n / 2 - existing_pairs)) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else {
            int to_break = existing_pairs - k;
            if (to_break <= (n / 2 - existing_pairs)) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}