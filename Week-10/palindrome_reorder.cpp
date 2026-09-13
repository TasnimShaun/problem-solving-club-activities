#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
    string s;
    cin >> s;
    vector< int > fre(26,0);
    for( char ch : s)
    {
        fre[ch-'A']++;
    }
    int odd =0, odidx =-1;
    for(int i=0;i<26;i++)
    {
        if( fre[i] % 2 != 0)
        {
            odd++;
            odidx  =i;
        }
    }
    if( odd > 1)
    {
         cout << "NO SOLUTION" << endl;
          return 0;
    }
     string f = "", m = "";
      for(int i=0;i<26;i++)
      {
        f += string( fre[i] / 2, 'A' +i);
      }
      if( odidx != -1)
      {
        m = string (fre[odidx] % 2, 'A' + odidx);
      }
       string snd = f;
       reverse (snd.begin(), snd.end());

        cout << f + m + snd << endl;

    return 0;
}