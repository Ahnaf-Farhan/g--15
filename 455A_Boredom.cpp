#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int j=0;j<n;j++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());
    vector<pair<int,int>>v1;
    int res,prev,k=0;
    for(int i=0;i<n;i++)
     {
         int j=i;
         int x=v[j];
         int count=1;
        if(j!=n)
        {
            while(j+1 < n && v[j]==v[j+1])
              {
                j+=1;
                count+=1;
              }
        }        
        //  v1[i].first=x;
        // v1[i].second=x*count;
         v1.push_back({x,x*count});

         if(i==0)
           {
             v1[0].first=x;
             res=v1[0].second;
             prev=0;
           }
         else
          {
            if(v1[k].first==v1[prev].first+1)
              {
                 if(res-v1[prev].second+v1[k].second >= res)
                    {
                      res=res-v1[prev].second+v1[k].second;
                      prev=k;
                      k+=1;
                    }  
                 
                // res=max(res-v1[prev].second+v1[i].second,res);
                // v1[i].second=res;
              }
            else
             {
                res+=v1[k].second;
                 prev=k;
                 k+=1;
             }  
          }


        i=j;   
     }
       
     cout<<res;
}