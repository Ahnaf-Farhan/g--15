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
         int count=0;
          while(n>=1)
             {
                if(n<=6)
                  {
                    if(n==1)
                       {
                        cout<<count<<endl;
                        break;
                       } 
                    else if(n==3)
                      {
                        cout<<count+2<<endl;
                        break;
                      }  
                    else if(n==6)
                      {
                        cout<<count+1<<endl;
                        break;
                      }  
                    else
                      {
                        cout<<-1<<endl; 
                        break;
                      }     
                  }
                


                else
                  {
                    if(n%6==0)
                      {
                        n/=6;
                        count+=1;
                      }
                    else
                      {
                         if((n*2)%6==0)      ///
                           {
                             n*=2;
                             count+=1;
                           }
                         else
                           {
                             cout<<-1<<endl;
                             break;
                           }  
                      }  
                  }                                
             }
       }
}