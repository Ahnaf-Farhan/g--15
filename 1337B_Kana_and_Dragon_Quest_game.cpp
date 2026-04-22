#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int x,n,m,i;
    cin>>x>>n>>m;

    for(i=0;x>=20&&n>=1;i++)
       {
         n-=1;
         x/=2;
         x+=10;
       }

     x-=m*10;

     if(x<=0)
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