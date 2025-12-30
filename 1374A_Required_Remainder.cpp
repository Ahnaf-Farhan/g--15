#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
      {
        long long x,y,k;
        cin>>x>>y>>k;
        int flag=0;
        for(long long i=k;i>=k/2;i--)
        {
            if(i%x==y)
              {
                cout<<i<<endl;
                flag=1;
                break;
              }  
        }
        if(!flag)
           {
             for(long long i=(k/2)+1;i>=0;i--)
            {
            if(i%x==y)
              {
                cout<<i<<endl;

                break;
              }  
            }
           }
      }
}