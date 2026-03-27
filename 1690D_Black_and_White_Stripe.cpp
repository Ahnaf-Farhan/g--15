#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n,k,res,temp=0,i,j=1;
    cin>>n>>k;

    string s;
    cin>>s;

    for(i=0; i<k; i++)
        {
          if(s[i]=='W')
            temp+=1;
        }

    res=temp;
     while(i< n)
        {
            if(s[j-1]=='W')
              {
                if(s[i]=='B')
                  temp-=1;
              }
            else
              {
                if(s[i]=='W')
                  temp+=1;
              }  

          res=min(res,temp);
          i++;
          j++;
        }   

    res=min(res,temp);    
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