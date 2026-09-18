#include <bits/stdc++.h>
using namespace std;

void swap_(int &i, int &j) {
    int temp = i;
    i = j;
    j = temp;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;
    swap_(x, y);
    cout << x << " " << y << endl;

    return 0;
}
