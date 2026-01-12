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
        int n,k,sum=0,i;
        cin>>n>>k;
        vector<int>v,v1;
        for(int i=0;i<n;i++)
           {
             int x;
             cin>>x;
             v.push_back(x);
           }
        for(int i=0; i<n; i++)
            {
              int x;
              cin>>x;
              v1.push_back(x);
            }   

       sort(v.begin(),v.end());
       sort(v1.begin(),v1.end(),greater<int>());

       for(i=0; i<k; i++)
        {
          if(v[i]<v1[i])
            sum+=v1[i];
          else
            break;  
        }

       while(i<n)
          {
            sum+=v[i];
            i++;
          } 
        cout<<sum<<endl;  
    }
    
    return 0;
}