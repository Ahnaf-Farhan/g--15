#include<bits/stdc++.h>
using namespace std;
int fun(vector<int>&v,int i,int k,int n,int sum1)
     {     
        if(i > n - k)
          {
            return sum1;
          } 

        int sum2=0;
        int temp=i;
        for(int j=0;j<k;j++)            
            {
               sum2+=v[temp++];                  
            }           

        if(sum1==sum2)
          cout<<i<<endl;  
        
        sum1=(sum2<sum1)?sum2:sum1;
  
        fun(v,i+1,k,n,sum1);   
     }
int main()
{
    int n,k;
    cin>>n>>k;

    vector<int>v(n);
    for(int i=0;i<n;i++)
       {
         int x;
         cin>>x;
         v[i] = x;
       }
    
    int sum1=0;   
        for(int j=0;j<k;j++)            
            {
              sum1+=v[j];
            }

    sum1=fun(v,0,k,n,sum1);
    fun(v,0,k,n,sum1);
}