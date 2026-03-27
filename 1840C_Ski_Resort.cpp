#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    long long n,k,q,ct=0,res=0;
    cin>>n>>k>>q;

    for(int i=0; i<n; i++)
        {
           long long x;
           cin>>x;

           if(x<=q)
             ct+=1;
           else
             ct=0;
             
           if(ct>=k)  
             res+=ct-k+1;
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