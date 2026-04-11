#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n;
    cin>>n;

    map<int,vector<char>> m;
        for(int i=97; i<97+26; i++)    
            m[0].push_back((char)(i));

    for(int i=0; i<n; i++)
        {
          int x;
          cin>>x; 
            cout<<m[x][0];
                m[x+1].push_back(m[x][0]);
                m[x].erase(m[x].begin());
           
        }
    
    cout<<endl;    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    
    while(t--)
        solve();

    return 0;
}