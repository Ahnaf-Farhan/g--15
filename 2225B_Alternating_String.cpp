#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    string s;
    cin>>s;

    int l=-1,r=-1;
    for(int i=1; i<s.size(); i++)
        {
          if(s[i]==s[i-1])
            {
                l=i;
                break;
            }
        }

      if(l==-1)
        {
            cout<<"YES"<<endl;
            return;
        }
        
    for(int i=s.size()-2; i>=l; i--)
        {
          if(s[i]==s[i+1])
            {
                r=i;
                break;
            }
        }   

     if(abs(r-l)==0)
       cout<<"YES"<<endl;
     else
       {
        for(int i=l;i<r;i++)
           {
             if(s[i]==s[i+1])
               {
                 cout<<"NO"<<endl;
                 return;
               }
           }

         cout<<"YES"<<endl;
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