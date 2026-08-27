#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
     {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
     //   int len = m + 1;
      
        
        int r_ = r;
        int l_ = l-m+1;
       

        cout << l_ << " " << r_ << endl;
    }
    return 0;
}
