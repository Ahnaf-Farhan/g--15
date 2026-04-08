#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    string s;
    int ab=0,ba=0;
    cin>>s;

    for(int i=1; i<s.size(); i++)
        {
          if(s[i]!=s[i-1])
            {
                if(s[i]=='a')
                  ba++;
                else
                  ab++;      
            }
        }

     if(ab>ba)
       {
           for(int i=0; i<s.size(); i++)
              {
                if(s[i]=='a')
                  {
                    s[i]='b';
                     break; 
                  }   
              }
       }   
     else if(ba>ab)
       {
           for(int i=0; i<s.size(); i++)
              {
                if(s[i]=='b')
                  {
                    s[i]='a';
                     break; 
                  }   
              }
       }  

      cout<<s<<endl; 
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