#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n,m;
   cin >> n >> m;
   map<string,string> map_ip;
   for(int i=0;i<n;i++)
   {
    string name, ip;
    cin >> name >> ip;
    map_ip[ip] = name;

   }
   for(int i=0;i<m;i++)
   {
    string command, command_ip;
    cin >> command >> command_ip;

    string ip = command_ip.substr(0,command_ip.size() - 1);

    cout << command << " " << command_ip << " " <<'#'<<map_ip[ip]<<endl;
   }

    return 0;
}
