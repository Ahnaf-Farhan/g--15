#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,temp=0,i,j,res=0;
    cin>>n>>m;
    vector<int> v;
    for(i=0; i<n; i++)
        {
          int x;
          cin>>x;
           v.push_back(x);            
        }

     for(j=0; j<n; j++)
        {
          temp+=v[j];
          if(temp>m)
            {
                temp-=v[j];
                res=j;            
                break;
            }           
        } 
       res=j;
     for(i=0;j<n;)
        {
            temp-=v[i];
            i+=1;
            while(temp+v[j]<=m && j < n)
               {                 
                 temp+=v[j];
                 j+=1;
               }
              if(temp>m) 
                j--;
              res=max(res,j-i); 
        }

      cout<<res<<endl;  
    return 0;
}