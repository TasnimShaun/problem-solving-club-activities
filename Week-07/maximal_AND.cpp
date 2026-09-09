#include <bits/stdc++.h>
using namespace std;

const int B = 30;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n, K;
        cin >> n >> K;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<int> bits(B + 1, 0);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j <= B; j++)
            {
                if ((v[i] >> j) & 1)
                {
                    bits[j]++;
                }
            }
        }

        long long answer = 0;

        
        for(int j = B; j >= 0; j--)
        {
            int need = n - bits[j]; 
            if (need <= K)
            {
                answer |= (1LL << j); 
                K -= need;            
            }
        }

        cout << answer << "\n";
    }

    return 0;
}
