#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--)
    {
    int n;
    cin >> n;
    
    map<char, int> required = {{'0', 3}, {'1', 1}, {'3', 1}, {'2', 2}, {'5', 1}};
    map<char, int> count;
    
    for (int i = 0; i < n; i++) {
        char digit;
        cin >> digit;
        count[digit]++;  
        
        bool found = true;
        for (auto &p : required) {
            if (count[p.first] < p.second) {
                found = false;
                break;
            }
        }

        if (found) {
            cout << i + 1 << endl;  
            return 0;
        }
    }
}

    cout << 0 << endl;  
    return 0;
}