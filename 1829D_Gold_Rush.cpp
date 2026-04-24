#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() 
{
    int n, m;
    cin >> n >> m;
    int l=n,r=n;

  if(l == m ) 
        { 
           cout << "YES\n"; 
           return;  
        }

    while(l > 0 && l%3==0 && r%3==0) 
    {
        l /= 3; r = 2*r/3;
        

        if(l == 1) 
        {
           cout << ((m & (m-1)) == 0 && m<=r? "YES" : "NO") << "\n";
           return;
        }

        else
        {
            if((l > 0 && m%l==0 && (m/l)%2==0 && m<=r) || l==m) 
        {
            cout << "YES\n"; return;
        }
        }  
        
    }
    cout << "NO\n";
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