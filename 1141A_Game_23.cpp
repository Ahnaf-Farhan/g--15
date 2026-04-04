#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,res=0;
    cin>>n>>m;

    if(m%n!=0)
      {
        cout<<-1<<endl;
        return 0;
      }
    m/=n;
    while(m%3==0&&m>=1)
        {
            m/=3;
            res+=1;
        }
    while(m%2==0&&m>=1)
        {
            m/=2;
            res+=1;
        }

        if(m==1)
         cout<<res<<endl;  
        else
         cout<<-1<<endl; 
    return 0;
}