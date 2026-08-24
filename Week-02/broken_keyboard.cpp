#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        stack<int> stack_L; 
        stack<int> stack_U; 
        for (int i = 0; i < s.size(); i++) 
        {   
            if (s[i] == 'b') 
            {
                if (!stack_L.empty()) 
                {
                    int idx = stack_L.top();
                    stack_L.pop();
                    s[idx] = 'x'; 
                }
            } 

           
            else if (s[i] == 'B')
             {
                if (!stack_U.empty())
                 {
                    int idx = stack_U.top();
                    stack_U.pop();
                    s[idx] = 'x'; 
                }
            } 
            else
             {
                 
            if (islower(s[i]))
            stack_L.push(i);
            
           else if (isupper(s[i])) 
            stack_U.push(i);
                
            }
        }

    
        for (char ch : s) 
        {
            if (ch != 'b' && ch != 'B' && ch != 'x') 
            {
                cout << ch;
            }
        }
        cout << endl;
    }
    return 0;
}
