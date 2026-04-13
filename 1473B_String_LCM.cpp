#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    string s1,s2;
    cin>>s1>>s2;

    if(s1.size()<s2.size())
      {
        int s=s1.size(),b=s2.size();

        int l=lcm(s,b);
        int mul=l/s;
        string ss=s1;
        while(--mul)
             ss+=s1;

        for(int i=0; i<ss.size();)
            {
              if(ss.substr(i,s2.size())==s2)
                i+=s2.size();
              else
                {
                    cout<<-1<<endl;
                    return;
                }  
            }   
            
          cout<<ss<<endl;  
      }
    else
      {
         int s=s2.size(),b=s1.size();

        int l=lcm(s,b);
        int mul=l/s;
        string ss=s2;
        while(--mul)
             ss+=s2;

        for(int i=0; i<ss.size();)
            {
              if(ss.substr(i,s1.size())==s1)
                i+=s1.size();
              else
                {
                    cout<<-1<<endl;
                    return;
                }  
            }   
            
          cout<<ss<<endl;  
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