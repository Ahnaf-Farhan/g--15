#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,res=0;
    cin>>n;
    int temp=n;

    for(int i=1; i<=temp; i++)
        {
            res+=n+(n-1)*(i-1);
            n--;
        }    
      cout<<res;  
    return 0;
}