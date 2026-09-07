#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long s;
    cin >> n >> s;

    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int l = 0;
    long long sum = 0, answer = 0;

    for (int r = 0; r < n; r++)
     {
        sum += v[r];

        while (l <= r && sum >= s) 
        {
            answer += (n - r); 
            sum -= v[l];
            l++;
        }
    }

    cout << answer <<endl;
    return 0;
}

// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/D
