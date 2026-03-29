#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n,res=0;
    char ch;
    cin>>n>>ch;

    string s1;
    cin>>s1;

    if(ch == 'g') 
      {
        cout << 0 << "\n";
        return;
      }
      

     string s=s1+s1;
    vector<int> g,c;
    for(int i=0; i<s.size(); i++)
        {
          if(s[i]=='g')
            g.push_back(i);
        }
    for(int i=0; i<n; i++)
        {
          if(s[i]==ch)
            c.push_back(i);
        }    


      for(int i=0,j=0; i<g.size()&& j<c.size();i++ )
        {
           while(j < c.size() && g[i]>c[j])
                {
                    res=max(res,g[i]-c[j]);
                    j++;
                    
                }
                if(j < c.size() && g[i] - c[j] > n) break;
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