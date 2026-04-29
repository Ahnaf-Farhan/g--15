#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll a,b,c,x,y,def=0;
    cin>>a>>b>>c>>x>>y;

    if((x-a)>0)
      def+=x-a;

    if((y-b)>0)
      def+=y-b;

    if(def<=c)
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