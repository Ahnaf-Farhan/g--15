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
        int n;
        cin>>n;
        if(n%3==1)
         {
             int res=n/3;
             cout<<res+1<<" "<<res<<endl;
         }
        else if(n%3==2)
         {
             int res=n/3;
             cout<<res<<" "<<res+1<<endl;
         } 
        else
         {   int res=n/3;
            cout<<res<<" "<<res<<endl;
         } 
    }
    
    return 0;
}