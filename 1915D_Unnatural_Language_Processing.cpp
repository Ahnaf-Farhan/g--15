#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    for(int i=0; i<s.size(); i++)
        {
          if(i+3<=n && (i+3==n ||((s[i]=='b'||s[i]=='c'||s[i]=='d')  && (s[i+3]=='b'||s[i+3]=='c'||s[i+3]=='d'))))
            {
                for(int j=i; j<i+3; j++)
                      cout<<s[j];

                if(i+3!=n)      
                   {cout<<'.'; }

                   i+=2; 
            }
          else
            {
                for(int j=i; j<i+2; j++)
                      cout<<s[j];

                if(i+2!=n)      
                   {cout<<'.';  }

                   i+=1; 
            }  
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