#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int res=0;
    for(int i=1;n>0;i++)
       {
         int sum=i*(i+1)/2;
         if(sum<=n)
           res+=1;
         else
           break;

         n-=sum;
       }

      cout<<res<<endl; 
    return 0;
}