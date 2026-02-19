#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,res=0;
    cin>>n>>m;

    while(n--)
        {
            res+=1;
            if(res%m==0)
               n+=1;
        }
      cout<<res;  
    return 0;
}