#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll x,y,a,b;
    cin>>x>>y>>a>>b;

        cout<<min((x+y)*a,abs(x - y)* a+min(x,y)*b)<<endl;
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