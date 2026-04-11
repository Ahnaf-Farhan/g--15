#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    string s1,s2;
    cin>>s1>>s2;
    int res=0;
    if(s1<s2)
      {
        for(int i=0; i<s1.size(); i++)
            {
                for(int j=s1.size()-1;j>=i;j--)
                   {
                     if(s2.find(s1.substr(i,j-i+1))!=string::npos)
                       res=max(res,j-i+1);
                   }
            }

          cout<<s1.size()+s2.size()-2*res<<endl;  
      }
    else
      {
        for(int i=0; i<s2.size(); i++)
            {
                for(int j=s2.size()-1;j>=i;j--)
                   {
                     if(s1.find(s2.substr(i,j-i+1))!=string::npos)
                       res=max(res,j-i+1);
                   }
            }

          cout<<s1.size()+s2.size()-2*res<<endl;  
      }  
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