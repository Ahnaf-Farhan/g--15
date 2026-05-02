#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll n,res=1;
    cin>>n;

    string s;
    cin>>s;

    if(n == 1) 
        {
         cout << 1 << "\n";
         return;
        }
    if(n == 2) 
       {
         cout << (s[0] == s[1] ? 2 : 3) << "\n";
         return;
       }
    else
      {
        int res=1;

        set<char>m;
        m.insert(s[0]);
        m.insert(s[1]);

        for(int i=2; i<n; i++)
            { 
                res+=m.size();

              if(m.find(s[i])== m.end())                   
                    m.insert(s[i]);
               
            }
            
          cout<<res+m.size();
      }  

      cout<<endl;
      
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