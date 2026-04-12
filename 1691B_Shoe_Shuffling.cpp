#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n,part=-1,l=INT_MAX,seg=INT_MAX,i=-1;
    cin>>n;

    map<int,vector<int>>m;
    
    for(int j=1; j<=n; j++)
        {
            int x;
            cin>>x;
          if(x!=part)
            {
                part=x;
                m[i].push_back(j-1);
                m[++i].push_back(j);

                l=min(l,seg );
                seg=1;
            }
          else          
                seg++;           
        }
    m[i].push_back(n);
    l=min(l,seg );


    if(l==1)
      cout<<-1;
    else
      {
        for(int i=0;i<(int)m.size()-1;i++)
           {
             cout<<m[i][1]<<" ";
             for(int x=m[i][0];x<m[i][1];x++)
                cout<<x<<" ";
           }
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