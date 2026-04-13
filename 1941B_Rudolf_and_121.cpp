#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n;
    cin>>n;

    vector<int> v;
    for(int i=0; i<n; i++)
        {
          int x;
          cin>>x;
            v.push_back(x);
        }

    for(int i=n-1; i>=2; i--)
        {
            if(v[i]==0)
              continue;
            else if(v[i]<0)
              {
                cout<<"NO"<<endl;
                return;
              }  
            else
              {
                int r=v[i];
                int m=r*2,l=r;

                v[i]=0;
                v[i-1]-=m;
                v[i-2]-=l;
              }
        }
           if(v[0]==v[2]&&v[0]==2*v[1])
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