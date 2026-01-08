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
        int n,c1=0,c2=0,sum1=0;
        cin>>n;
        while(n--)
           {
             int x;
             cin>>x;
             if(x==2)
               c2+=1;
             else
               {
                 c1+=1;
                 sum1+=1;
               }  
           }

         if(c1==0)
           {
              if(c2%2==0)
               cout<<"YES"<<endl;
             else
               cout<<"NO"<<endl; 
             
           }  
        //  if(c2%2!=0)  
        //    {
        //      if((sum1)%2==0)
        //        {
        //          if((sum1/2)%2!=0)
        //           cout<<"YES"<<endl;
        //          else 
        //           cout<<"NO"<<endl;
        //        }             
        //      else 
        //        cout<<"NO"<<endl;  
        //    }
         else
           {
             if(c1%2==0)
               cout<<"YES"<<endl;
             else
               cout<<"NO"<<endl;  
           }  
    }
    
    return 0;
}