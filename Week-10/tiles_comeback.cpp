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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
         int first = v[0];
         int last = v[n-1];
         if( first == last)
         {
            int count =0;
            for(int i =0;i<n;i++)
            {
                if( v[i] == first)
                {
                    count++;
                }
            }
             
             if( count >= k)
             {
                cout << "YES" << endl;
             }
             else 
             {
                cout << "NO" << endl;
             }
         }
         else 
         {
          int count_first = 0, count_last = 0;
            int pos_first = -1, pos_last = -1;

            
            for (int i = 0; i < n; ++i) 
            {
                if (v[i] == first)
                 {
                    count_first++;
                    if (count_first == k)
                     {
                        pos_first = i;
                        break;
                    }
                }
            }

           
            for (int i = n - 1; i >= 0; --i) 
            {
                if (v[i] == last) 
                {
                    count_last++;
                    if (count_last == k)
                     {
                        pos_last = i;
                        break;
                    }
                }
            }

            
            if (pos_first != -1 && pos_last != -1 && pos_first < pos_last)
             {
                cout << "YES" << endl;
            }
             else
             {
                cout << "NO" << endl;
            }
        }
            
   }
   return 0;
} 


