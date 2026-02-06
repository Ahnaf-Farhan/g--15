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

        int i=4,k=1,div=3;
        while(1)
             {
                if(n%div==0)
                   {
                    cout<<n/div<<endl; 
                    break;
                   } 
                else
                  {
                    k++;
                    div+=i;
                    i*=2;
                  }   
             }  
    }
    
    return 0;
}