#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int m,n;
    cin>>m>>n;

    map<int,vector<int>>mp;
    for(int i=0; i<m; i++)
        {
          for(int j=0; j<n; j++)
            {
                char x;
                cin>>x;

                if(x=='#')
                  mp[i+1].push_back(j+1);
            }
        }

    if(mp.size()!=1)
    {
         auto it=mp.begin();
         int i=(*it).first+mp.size()/2;

         int j=mp[i][0]+(mp[i].size())/2;

         cout<<i<<" "<<j<<endl;
    } 
    else
    {
        auto it=mp.begin();
        int i=(*it).first;
        int j=mp[i][0];

        cout<<i<<" "<<j<<endl;
    }   
   

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