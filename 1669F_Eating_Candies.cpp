#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n;
    cin>>n;

    vector<int> v;
    for(int i=0; i<n; i++)
        {
          int x;
          cin>>x;

          v.push_back(x);
        }

        int l=0,r=n-1,res=0,rl=v[0],rr=v[n-1];
      while(l<r)
         {
            if(rl==rr)
              {
                 res=n-(r-l-1);

                rl+=v[++l];
                rr+=v[--r];
              }
            else if(rl<rr)             
                rl+=v[++l];
            else  
                rr+=v[--r];              
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