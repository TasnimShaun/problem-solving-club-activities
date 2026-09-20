#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        
        bool allSame = true;
        for (int i = 1; i < N; ++i) {
            if (A[i] != A[0]) {
                allSame = false;
                break;
            }
        }
        
        if (allSame) {
            cout << "YES" << endl;
            continue;
        }
        
        bool hasZero = false;
        bool hasNonZero = false;
        for (int num : A) {
            if (num == 0) {
                hasZero = true;
            } else {
                hasNonZero = true;
            }
        }
        
        if (hasZero && hasNonZero) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
