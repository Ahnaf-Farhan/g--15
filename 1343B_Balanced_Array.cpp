#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
     cin>>t;
     while(t--)
       {
         int n;
         cin>>n;
         if(n%4==0)
           {
            cout<<"YES\n";
            int j=2;
            for(int i=1;i<=n/2;i+=1)
                {
                    cout<<j<<" ";
                    j+=2;
                }
            
            j=1;
            for(int i=1;i<n/2;i+=1)
                {
                    cout<<j<<" ";
                    j+=2;
                }
            cout<<j+n/2<<endl;
            }
          else
            {
                cout<<"NO\n";
            }               
       }
}