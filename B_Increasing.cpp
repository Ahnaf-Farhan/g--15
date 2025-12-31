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
        int a[n];
        int x=0;
        int flag=1;
        for(int i=0;i<n;i++)
           {
            cin>>a[i];
           }
        sort(a,a+n);   
         for(int i=0;i<n;i++)
           { 
            if(x!=a[i])
               x=a[i];
            else
              {
                cout<<"NO\n";  
                flag=0;
                 break;
              }
            }
          if(flag)
            cout<<"YES\n";           

       }   
    }