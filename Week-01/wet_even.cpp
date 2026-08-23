#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
     cin >> n;
     vector<long long int> num(n);
     long long int sum = 0;
     long long mini = LLONG_MAX;
      for(int i =0;i<n;i++)
      {
        cin >> num[i];
        sum += num[i];
        if(num[i] %2 !=0)
        {
          mini = min(mini,num[i]);
        }
    }
     if(sum % 2 !=0)
     {
      if(mini != LLONG_MAX)
       {
         sum -= mini;
       }
       else
        sum =0;
     }
      cout << sum << endl;
    return 0;
}