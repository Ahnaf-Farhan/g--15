#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll n;
    long long res=0;
    cin>>n;

    n/=2;
    for(int i=1; i<=n; i++)
        {
          long long height=n-i;

            res+=height*(2*i-1);

         long long j=i-1;
            res+=2*(j*(j+1)/2);
        }

      res += n * n;
      res*=4;
      res+=4*(n*(n+1)/2);

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