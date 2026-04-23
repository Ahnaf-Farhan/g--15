#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n,minn=1000,maxx=0,res=0;
    cin>>n;

    vector<int> v;
    for(int i=0; i<n; i++)
        {
          int x;
          cin>>x;

          v.push_back(x);

          if(x>maxx)
            maxx=x;
          if(x<minn)
            minn=x;  
        }

    res=max({v[n-1]-v[0],maxx-v[0],v[n-1]-minn});
    for(int i=0; i<n-1; i++)        
          res=max(res,v[i]-v[i+1]);
      
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