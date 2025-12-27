#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>=0)
      cout<<n;
    else
       {
        int digit[2];
        for(int i=0;i<2;i++)
           {
             digit[i]=n%10;
             n/=10;
           }

            cout<<max(n*10+digit[0],n*10+digit[1]);     
        }   
}