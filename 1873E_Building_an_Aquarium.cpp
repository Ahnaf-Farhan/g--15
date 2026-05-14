#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll n,x;
    cin>>n>>x;

    map<int,int>m;
    for(int i=0; i<n; i++)
        {
           int p;
           cin>>p;

           m[p]+=1;
        }

      while(x > 0)
   {
    auto it = m.begin();
    auto nxt = next(it);
    
    int key = it->first;
    int num = it->second;
    
    
    int gap = (nxt != m.end()) ? (nxt->first - key) : (x / num + 1);
    ll cost = (ll)num * gap;
    
    if(cost <= x)
    {
        m[key + gap] += num;
        m.erase(it);
        x -= cost;
    }
    else
    {
        cout << key + x / num << "\n";
        return;
    }
   }

cout << m.begin()->first << "\n";
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