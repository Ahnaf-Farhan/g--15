#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll n,op=1,res=0,mn=INT_MAX,j;
    cin>>n;

    vector<ll> v,g;

    for(int i=0; i<n; i++)
    {
          int x;
          cin>>x;

          v.push_back(x);
          g.push_back(x);
        if(i<n-1)
        {
          if(op*x<0)
            op=-1;
          else
            op=1;    
            
          v[i]*=op;  
        }  
          
           res+=abs(x);
            
          if(mn>abs(x))
            {
                mn=abs(x);
                j=i;
            } 

        
    }

        if(op*v[n-1]<0)
        {            
                res-=2*abs(mn);                         
                //res+=g[j];                   
        }
                 
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