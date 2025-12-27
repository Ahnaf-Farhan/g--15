#include<bits/stdc++.h>
using namespace std;
void fun(long long l,long long r,long long n)
    {
        long long num=r-l+1;
        if((num)<n)
          {
            cout<<r<<endl;
            return;
          }
        else if(num==n)
           cout<<r+1<<endl;
       
        else   
        {
            long long x=num/n;        
            fun(l+n*x,r+x,n);
        }   
    }
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long n,k;
       cin>>n>>k;
        
       fun(1,k,n);
    }
}