#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        if(s.find("...")!=string::npos)
          cout<<2<<endl;
        else
          {
            int res=0;
            for(int i=0; i<n; i++)
                {
                  if (s[i]=='.')
                  {
                    res+=1;
                  }
                  
                }
             cout<<res<<endl;   
          }
    }
    
    return 0;
}