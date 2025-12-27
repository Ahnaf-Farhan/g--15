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
         vector<int>v;
         int min1=0;
         for(int i=0;i<n;i++)
             {
                int x;
                cin>>x;
                v.push_back(x);
                min1+=v[i];
             }

        vector<int>v1=v;  
        for(int i=0;i<n;i++)
        {    
            int sum=0;  
        for(int i=1;i<n;i++)
             {                                                           
                sum+=abs(v[i]-v[i-1]);
             } 
               min1=min(min1,sum);
            }  


        int max1; 
         for(int i=0;i<n;i++)
        {    
            int sum=0;  
        for(int i=1;i<n;i++)
             {                                                           
                sum+=abs(v[i]-v[i-1]);
             } 
               if(min1==sum)
                 {
                    max1=v[i];
                    goto res;
                 }
            }  

         res:   
        
             if(v[0]==max1)
                v[0]=0;

        int sum=0;     
        for(int i=1;i<n;i++)
             {    
                if(v[i]==max1)
                  {
                    if(i==n-1)
                      break;
                    else  
                    {
                        sum+=abs(v[i+1]-v[i-1]);                    
                        i+=1;
                        continue;
                    }    
                  }
                sum+=abs(v[i]-v[i-1]);
             } 
          cout<<sum<<endl;     
       }
}       