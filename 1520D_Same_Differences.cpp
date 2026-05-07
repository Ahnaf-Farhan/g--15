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
        long long n,res=0;
        cin>>n;
        
        map<int,int>m;
        for(int i=0; i<n; i++)
          {
            int x;
            cin>>x;

            m[x-i]+=1;
          }

        for(auto &x:m) 
           {
               int sm=x.second;
               res+=1ll*sm*(sm-1)/2;
           }            
              
          
          cout<<res<<endl;    
    }
    
    return 0;
}