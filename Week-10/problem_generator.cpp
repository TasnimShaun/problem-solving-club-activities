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
         int n, m;
        cin >> n >> m;
        string a; 
        cin >> a;

        vector<int> freq(7, 0); 

        for (char ch : a) 
        {
            freq[ch - 'A']++;
        }

        int needed = 0;
        for (int i = 0; i < 7; i++)
         {
            if (freq[i] < m) 
            {
                needed += (m - freq[i]);
            }
        }

        cout << needed <<endl;
    } 
   
   return 0;
}