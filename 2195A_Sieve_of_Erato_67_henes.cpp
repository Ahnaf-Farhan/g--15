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
        int n,flag=0;
        cin>>n;
        for(int i=0; i<n; i++)
            {
             int x;
             cin>>x;
              if(x==67)
                flag=1;
            }
         if(flag)
           cout<<"YES"<<endl;
         else
           cout<<"NO"<<endl;     
    }
    
    return 0;
}