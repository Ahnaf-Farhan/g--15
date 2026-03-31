#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll a,b;
    cin>>a>>b;

    if(b == 1)
    {
        cout << "NO" << endl;
        return;
    }

    ll op=a*b;
         
        op*=3;
     
    cout<<"YES"<<endl;    
    cout<<a<<" "<<op-a<<" "<<op<<endl;
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