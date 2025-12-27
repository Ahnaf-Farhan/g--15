#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
       {
         int n,k;
         cin>>n>>k;
         vector<int>v;
         for(int i=0;i<n;i++)
            {
                int x;
                cin>>x;
                v.push_back(x);
            }

         if(k>1)
           cout<<"YES"<<endl;
         else
           {
             int flag=1;
             for(int i=0;i<n-1;i++)
               {
                 if(!(v[i]<=v[i+1]))
                    {
                        cout<<"NO"<<endl;
                        flag=0;
                        break;
                    }    
               }
               
              if(flag==1)
                cout<<"YES"<<endl; 
           }     
       }
}