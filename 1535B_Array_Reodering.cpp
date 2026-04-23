#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n,res=0;
    cin>>n;

    vector<int> v;
    for(int i=0; i<n; i++)
        {
          int x;
          cin>>x;

          v.push_back(x);
        }

    for(int i=0; i<n-1; i++)
        {
            if(v[i]%2==0)
              res+=(n-1)-i;
            else
              {
                 for(int j=i+1; j<n; j++)
                    {
                        if(v[j]%2==0 || gcd(v[j],v[i])>1)
                          res+=1;
                    }
              }       
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