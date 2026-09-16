#include<bits/stdc++.h>
using namespace std;
void printLove(int n) 
{
    if (n == 0)
     return;  
    cout << "I love Recursion" << endl;
    printLove(n - 1); 
}
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr); int N;
   cin >> N;
   printLove(N);
   return 0;
}



