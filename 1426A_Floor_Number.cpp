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
        int n,x;
        cin>>n>>x;

        if(n<=2)
          cout<<1<<endl;
        else
          {
            n-=2;
            if(n%x==0)
              cout<<1+n/x<<endl;
            else
              cout<< 2+ n/x<<endl;
          }
    }
    
    return 0;
}