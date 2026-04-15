#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=0; i<=n; i++)
        {
            int space=2*(n-i);
          while(space--)
               cout<<" ";

               
           if(i==0)
             {
                cout<<0<<endl;
                continue;
             }    
           int j;
           for(j=0; j<=i; j++)
              cout<<j<<" ";
           
          j-=2;    
          for(;j>=0;j--) 
            {
                if(j==0)
                  cout<<0;  
                else  
                  cout<<j<<" "; 
            }    
           
           cout<<endl; 
        }
    
    for(int i=n-1;i>=0;i--)
        {
             int space=2*(n-i);
          while(space--)
               cout<<" ";

               if(i==0)
             {
                cout<<0<<endl;
                continue;
             }  
           int j;
           for(j=0; j<=i; j++)
              cout<<j<<" ";
           
           j-=2;    
          for(;j>=0;j--) 
            {
                if(j==0)
                  cout<<0;  
                else  
                  cout<<j<<" "; 
            }    
           
           cout<<endl;    

        }    
    return 0;
}