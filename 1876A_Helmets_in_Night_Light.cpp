#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n,p;
    cin>>n>>p;

    vector<int> v;
    multimap<int,int>m;
    for(int i=0; i<n; i++)
        {
          int x;
          cin>>x;
           v.push_back(x);
        }
    for(int i=0; i<n; i++)
        {  int x;
           cin>>x;
           m.insert({x,v[i]});
        }    

    ll res=p;
    auto it= m.begin();
    for(int i=1; i<=n; i++,it++)
        {
          if(it->first<p)
            {
                if(it->second<=(n-i))
                  {
                    res+=(ll)(it->first)*(it->second);
                    n-= (it->second)-1;
                  }
                else
                  {
                    res+=(ll)(n-i)*(it->first);
                    cout<<res<<endl;
                    return;
                  }  
            }
          else
            {
                res+=(ll)p*(n-i);
                cout<<res<<endl;
                return;
            }  
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