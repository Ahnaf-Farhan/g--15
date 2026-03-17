#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n;
    cin>>n;

    int f=0;
    vector<int> v;
    v.push_back(0);
    for(int i=0; i<n; i++)
        {
          int x;
          cin>>x;
           v.push_back(x);
        }

     for(int i=2; i<=n; i++)
        {
          if(v[i]>v[i-1])
            f=1;

          if(f)
            {
                if(v[i]<v[i-1])
                  {
                    cout<<"YES"<<endl;
                    cout<<i-2<<" "<<i-1<<" "<<i<<endl;
                     return;
                  }
            }  
        }   

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