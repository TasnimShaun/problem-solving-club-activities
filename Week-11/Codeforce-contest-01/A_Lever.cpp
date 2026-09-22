#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>a(n), b(n);
        for(int i=0;i<n;i++)
         cin >> a[i];
        for(int i=0;i<n;i++)
         cin >> b[i];

        int iterations = 0;
        while(true)
        {
            bool step1_done = false;

           
            for(int i=0;i<n;i++)
            {
                if(a[i] > b[i])
                {
                    a[i]--;
                    step1_done = true;
                    break;
                }
            }

           
            for(int i=0;i<n;i++){
                if(a[i] < b[i]){
                    a[i]++;
                    break;
                }
            }

            iterations++;
            if(!step1_done) 
            break;
        }
        cout << iterations <<endl;
    }
}

