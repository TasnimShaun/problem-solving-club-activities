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
        int h, x, y;
        cin >> h >> x >> y;

        int count1 = 0; 
        int _h = h;
        while(_h > 0) {
            _h -= x;
            count1++;
        }

        int count2 = 0; 
        if(h - y <= 0) {
            count2 = 1; 
        } else {
            int remaining = h - y;
            count2 = 1; 
            while(remaining > 0) {
                remaining -= x;
                count2++;
            }
        }

        cout << min(count1, count2) << endl;
    }

    return 0;
}

