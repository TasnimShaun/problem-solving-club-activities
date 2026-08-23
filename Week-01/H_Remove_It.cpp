#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        if(value != x)
        v.push_back(value);
       
    }
  
    for(auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
