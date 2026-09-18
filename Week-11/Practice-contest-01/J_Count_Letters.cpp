#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   string S;
   cin >> S;

   int freq[26] = {0}; 

  
   for (char c : S) {
       freq[c - 'a']++;
   }

   
   for (int i = 0; i < 26; ++i)
    {
       if (freq[i] > 0) 
       {
           cout << char(i + 'a') << " : " << freq[i] << endl;
       }
   }
    return 0;
}