#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int p=m;
    while(1)
      {
        p+=1;
        // int flag=0;
        for(int i=2;i<p;i++)
           {
            if(i==p-1 && p%i!=0 )
            //   flag=1;
               {
                 if(p==n)
                   cout<<"YES";
                 else
                    cout<<"NO";
                    
                   return 0; 
               }

            if(p%i==0)
              break;                        
           }
      }
}