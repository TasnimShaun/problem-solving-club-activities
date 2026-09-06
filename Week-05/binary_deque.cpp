#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> v(n);
        int total_sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            total_sum += v[i];
        }

        if (total_sum < s)
        {
            cout << -1 << endl;
            continue;
        }

        if (total_sum == s)
        {
            cout << 0 << endl;
            continue;
        }

        int max_window = 0, sum = 0, l = 0;

        for (int r = 0; r < n; r++)
        {
            sum += v[r];

            while (sum > s && l <= r)
            {
                sum -= v[l];
                l++;
            }

            if (sum == s)
                max_window = max(max_window, r - l + 1);
        }

        cout << n - max_window << endl;
    }

    return 0;
}
// https://codeforces.com/problemset/problem/1692/E