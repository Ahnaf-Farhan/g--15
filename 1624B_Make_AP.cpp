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
        int a,b,c,flag=0;
        cin>>a>>b>>c;

        if((a+c)/2>=b && (a+c)%2==0)
           {
             if(((a+c)/2)%b==0)
               cout<<"YES"<<endl;
             else
               cout<<"NO"<<endl;  
           }
        else
           {
            if(abs(b-c)>=0)
            {
                if(b-c==0)
                  {
                    if(b%a==0)
                      flag=1;                      
                  }
                else if((b+(b-c))%a==0 && (b+(b-c))>0)
                     flag=1;
            }
             

            if(!flag)
            if(abs(b-a)>=0) 
            {
                if(b-a==0)
                  {
                    if(b%c==0)
                      flag=1;
                  }               
                else if((b+(b-a))%c==0 && (b+(b-a))>0)  
                     flag=1;
            }  


             if(!flag)
               cout<<"NO"<<endl;
             else
               cout<<"YES"<<endl;      
           }
        
    }
    
    return 0;
}

