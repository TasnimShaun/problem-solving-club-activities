#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin >> n;
    vector<int> v(n);
    for(int i= 0; i<n; i++)
    {
        cin >> v[i];
    }
    int left_pointer =0, right_pointer =n-1;
    int sereja_point =0, dima_point =0;
    bool mov_e = true;
    while(left_pointer<= right_pointer)
    {
        int x;
         if(v[left_pointer]>v[right_pointer])
         { 
            x = v[left_pointer];
            left_pointer ++;
           
         }
         else{
            x = v[right_pointer];
            right_pointer--;
         }
         if(mov_e)
         sereja_point += x;
         else
         dima_point += x;
         mov_e =! mov_e;

    }
    cout << sereja_point << " " << dima_point;
    return 0;
}