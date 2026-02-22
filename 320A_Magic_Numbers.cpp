#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    string s;
    cin>>s;

    if(s.size()==1 && s[0]=='1')
      {
        cout<<"YES";
        return;
      }
    else if(s.size()==1 && s[0]!='1')
      {
        cout<<"NO";
        return;
      }    

    for(int i=0; i<s.size();)
        {
          if(s[i]=='1')
            {
                if(i+2<s.size() &&s.substr(i,3)=="144" )
                  i+=3;
                else if(i+1<s.size()&& s.substr(i,2)=="14")
                  i+=2;
                else if(s.substr(i,1)=="1")   
                  i+=1;
                else
                  {
                    cout<<"NO";
                    return ;
                  } 
            }
          else
            {
                cout<<"NO";
                return ;
            }  
        }
        cout<<"YES";

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    
        solve();

    return 0;
}