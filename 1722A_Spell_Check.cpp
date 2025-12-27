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
         string st, s="Timur";
         cin>>st;
         if(n==5)
            {
                for(int i=0;i<5;i++)
                   {
                     for(int j=0;j<5;j++)
                        {
                            if(st[i]==s[j])
                              s[j]=1;
                        }
                   }

                 int flag=1;  
                for(int i=0;i<5;i++)
                   {
                     if(s[i]!=1)
                       {
                         cout<<"NO\n";
                         flag=0;
                         break;
                       }
                   }  
                   
                if(flag)
                  cout<<"YES\n";   
            }
         else
           cout<<"NO\n";
       }
}