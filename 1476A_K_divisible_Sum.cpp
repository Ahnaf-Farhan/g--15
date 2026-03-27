#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll n,k;
    cin>>n>>k;

    if(n>k)
        {
            if(n%k!=0)
              k=(n/k)*k+k;
            else  
              k=(n/k)*k;
        }
      
    if(k%n==0)
      cout<<k/n<<endl;
    else
      cout<<(k/n)+1<<endl;  
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