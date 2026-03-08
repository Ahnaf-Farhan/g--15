#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n,c0=0,c1=0,c00=0,c11=0,minn=0;
    cin>>n;

    string s;
    cin>>s;

    for(int i=0; i<s.size();i++ )
        {
          if(s[i]=='0')
            c0++;
          else
            c1++;
        }    
    for(int i=0; i<s.size()-2;i++ )
        {
           if(s.substr(i,3)=="101")
            {
                s[i+1]='1';
                c11++;
                i++;
            } 
           else if(s.substr(i,3)=="111")
             c00++;
        }

    while(1)
      {
        int count =0;
        for(int i=0; i<s.size()-2;i++ )
          {
            if(s.substr(i,3)=="111")
               {
                 count+=1;
                 s[i+1]='0';
                 i++;
               }
          }

         if(count ==0)
           break; 
      }   

      for(int i=0; i<s.size();i++ )
        {
          if(s[i]=='1')
            minn++; 
        }    

      cout<< minn<<" "<<c1+c11<<endl; 
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