#include <bits/stdc++.h>
using namespace std;
int res=0;
using ll = long long;

ll fun(int ind,vector<ll>&v,map<int,ll>&m,int n)
     {       
        if(m.count(ind)!=0)
            return m[ind];
          
        if(ind>n)
            return 0;
          
    ll temp= v[ind-1] + fun(ind+v[ind-1],v,m,n);  
        if(m.count(ind)==0)
          m[ind]=temp;
          return temp;         
     }
void solve()
{
    ll n,x=0;
    cin>>n;

    map<int,ll>m;
    vector<ll> v;
    for(int i=0; i<n; i++)
        {
          int x;
          cin>>x;

          v.push_back(x);
        }

    for(int i=0; i<n; i++)    
           x=max(x,fun(i+1,v,m,n));
        
      cout<<x<<endl;  
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