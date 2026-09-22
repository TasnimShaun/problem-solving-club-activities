#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = stoi(s); // convert the 4-digit string to integer
        bool found = false;

        int root = sqrt(n);
        if (root * root != n) {
            cout << -1 << endl;
            continue;
        }

        int sum = root; // we want to find a and b such that a + b == sum

        for (int a = 0; a <= sum; ++a) {
            int b = sum - a;
            if (a >= 0 && b >= 0) {
                cout << a << " " << b << endl;
                found = true;
                break;
            }
        }

        if (!found)
            cout << -1 << endl;
    }
    return 0;
}
