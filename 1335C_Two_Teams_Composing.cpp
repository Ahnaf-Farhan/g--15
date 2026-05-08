#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n,mx=1,mn,res;
    cin>>n;

    
        map<int,int>m;
     for(int i=0; i<n; i++)
        {
          int x;
          cin>>x;

            m[x]+=1;
        }

     for(auto mm:m)         
            mx=max(mx,mm.second);
         
        mn=m.size()-1;    
         
       res=min(mx,mn);
       
       if(n==1)
        cout<<0<<endl;
       else if(mx-mn>1)
         cout<<res+1<<endl;
       else
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