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
        int n,m;
        cin >> n >> m;
        map<int,set<int>> mp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }
        for(int i=0;i<m;i++)
        {
            int l, r;
            cin >> l >> r;
            if((mp.find(l) == mp.end() ) || (mp.find(r) == mp.end()))
            {
                cout << "NO" << endl;
            }
            else
            {
                int start_lft , end_right;
                start_lft = *mp[l].begin();
                end_right = *mp[r].rbegin();
                if(start_lft < end_right)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }

            }
        }
      }
     return 0;
 }