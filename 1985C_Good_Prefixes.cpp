#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll n,sum=0,res=0;
    cin>>n;

    set<ll>s;
    s.insert(0);
    while(n--)
        {
            ll x;
            cin>>x;

            auto it=s.end();
                it--;

            if(x>=*it)
              {
                if(sum==x)
                  res+=1;
                 
                  s.insert(x);                  
                  sum+=x;
              }
            else
              {
                if(sum+x-*it==*it)
                   res+=1;

                   s.insert(x);
                   sum+=x;
              } 
        }
    cout<<res<<endl;    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}