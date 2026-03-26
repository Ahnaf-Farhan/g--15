#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll n,sum2=0,min=INT_MAX,res=0;
    cin>>n;

    vector<vector<int>> v(n);

    for(int i=0; i<n; i++)
         {
            int l,op=0;
            cin>>l;           
            while(l--)
                {
                    int x;
                    cin>>x;
 
                      v[i].push_back(x);

                   if(min>x)
                     min=x;  
                }

            sort(v[i].begin(),v[i].end());

             sum2+= v[i][1];            
         }

     for(int i=0; i<n; i++)       
          res=max(sum2-v[i][1]+min,res);
        
       cout<<res<<endl;   
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