#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll n,k;
    cin>>n>>k;

    ll op=n-(k-1)*(k-1);
    if(op%2!=0 && op >= 2*k-2)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;  
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