#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;

    if(n==0)
       cout<<1;
    else if(n%4==0)
      cout<<6;
    else if(n%4==1)
      cout<<8;
    else if(n%4==2)
      cout<<4;
    else if(n%4==3)
      cout<<2;      

    // int ans=8;
    // int mul=1;
    // for(int i=1; i<=n; i++)
    //     {
    //         ans=8*mul;
    //         mul=ans%10;
    //     }    

    // cout<<ans%10;    
    return 0;
}