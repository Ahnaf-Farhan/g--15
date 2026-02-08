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
        int n,m,res=0;
        cin>>n>>m;

         string s,x;
         cin>>s>>x;

        while(1)
            {
                if(s.find(x)!=string::npos)
                   {
                     cout<<res<<endl;
                     break;
                   }
                else
                   {
                     s+=s;
                      
                     res+=1;
                   }

              if(s.size()>x.size()) 
                 {
                  if(s.find(x)!=string::npos)
                   {
                     cout<<res<<endl;
                     break;
                   }
                  else 
                   {
                     s+=s;
                     res+=1;

                     if(s.find(x)!=string::npos)
                     {
                     cout<<res<<endl;
                     break;
                     }
                   }
                   
                     cout<<-1<<endl;
                     break;
                    
                 }    
            } 
    }
    
    return 0;
}