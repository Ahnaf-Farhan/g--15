#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
       {
         int a,b,c,res;
         cin>>a>>b>>c;
         if(c%2==0)
           res=2;
         else
           res=1;
           
         res+=min(a,b);
         if(res%2==0 )
            {
                if((a-min(a,b)>0))
                  cout<<"First"<<endl;
                else if((a-min(a,b)==0)&&(b-min(a,b)==0))
                  { res+=min(a,b);
                    if(res%2==0)
                      cout<<"Second"<<endl;
                    else  
                      cout<<"First"<<endl;
                  }    
                else  
                  cout<<"Second"<<endl;                    
            }  
         else
                if((b-min(a,b)>0))

                   cout<<"Second"<<endl;
                else if((a-min(a,b)==0)&&(b-min(a,b)==0))                  
                  { res+=min(a,b);
                    if(res%2==0)
                      cout<<"Second"<<endl;
                    else  
                      cout<<"First"<<endl;
                  }   
                else  
                   cout<<"First"<<endl;
       }
}       