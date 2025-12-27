#include<bits/stdc++.h>
using namespace std;
void fun(vector<int>v,int i,int t,int res,int n)
    {        
        int count=1;
        long long sum=v[i];
        int temp=i;
        while(sum<=t)
             {
                ++temp;
                if(temp>=n)
                  break;
                sum+=v[temp];
                count+=1;                
             }
        res=max(count+1,res);

        if(i>=n)
           {
             cout<<res;
             return;
           }

        fun(v,i+1,t,res,n);
             
    }
int main()
{
    int n,t;
    cin>>n>>t;

    vector<int>v;
    for(int i=0;i<n;i++)
       {
            int x;
            cin>>x;
           v.push_back(x);
       }

     fun(v,0,t,0,n);  
}