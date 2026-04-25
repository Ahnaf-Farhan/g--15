#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll n,c,ss=0,s=0;
    cin>>n>>c;

    for(int i=0; i<n; i++)
        {
          int x;
          cin>>x;

          s+=x;
          ss+=x*x;       
        }

      ll x=c-ss,l=1,r=1e9;
      while(l <= r)
         {
            ll mid=(l+r)/2;
            __int128 temp=(__int128)4*n*mid*mid+(__int128)4*mid*s;
            if(temp==x)
              {
                cout<<mid<<endl;
                return;
              }
            else if(temp<x)
              l=mid+1;
            else
              r=mid-1;  
         }

    //     cout<<fixed<<(double)(-4*s+(double)sqrt(16*s*s-8*n*(ss-c)))/(4*n)<<endl;
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