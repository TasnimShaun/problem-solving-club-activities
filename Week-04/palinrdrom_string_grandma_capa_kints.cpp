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
        string s;
        cin >> s;
        int answer = INT_MAX;

        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            int l = 0, r = n - 1;
            int count = 0;
            bool is_palindrome = true;

            while (l <= r)
            {
                if (s[l] == s[r])
                {
                    l++;
                    r--;
                }
                else if (s[l] == ch)
                {
                    l++;
                    count++;
                }
                else if (s[r] == ch)
                {
                    r--;
                    count++;
                }
                else
                {
                    is_palindrome = false;
                    break;
                }
            }
            if (is_palindrome)
                answer = min(answer, count);
        }

        if (answer == INT_MAX)
            cout << -1 << endl;
        else
            cout << answer << endl;
    }
    return 0;
}
