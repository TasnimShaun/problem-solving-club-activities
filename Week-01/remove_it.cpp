 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    
    int n, x;
     cin >> n >> x;
     set<int>st[n];
     while(n--)
     {
        int value;
        cin >> value;
     st->insert(value);
     st->erase(x);
     }
     for(auto it = st->begin(); it!=st->end();it++)
     {
        cout << *it << " ";
     }

    return 0;
 }