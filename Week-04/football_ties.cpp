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
     int x , y;
     cin >> x >> y;
     int answer = 0;
        for (int i = 0; i <= min(x, y); i++)
         {
            if ((x - i) % 3 == 0 && (y - i) % 3 == 0)
             {
                answer = i;
                break;
            }
        }
        cout << answer << endl;
   }

    return 0;
}