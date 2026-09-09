#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n); // Desired sizes
    vector<int> b(m); // Apartment sizes

    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < m; ++i) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0, count = 0;

    while (i < n && j < m) {
        if (b[j] < a[i] - k) {
            // Apartment too small for applicant
            j++;
        } else if (b[j] > a[i] + k) {
            // Apartment too big for applicant
            i++;
        } else {
            // Suitable apartment found
            count++;
            i++;
            j++;
        }
    }

    cout << count << '\n';
    return 0;
}
