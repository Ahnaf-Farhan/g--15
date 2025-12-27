#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    { 
    int n,x;
    cin>>n>>x;
    vector<int>v;
    v.push_back(0);
    for(int i=1;i<=n;i++)
       {
        int k;
        cin>>k;
        v.push_back(k);
       } 
    
       int res=0;
    for(int i=0;i<n;i++)
       {
         res=max(res,v[i+1]-v[i]);
       }

    res=max(res,2*(x-v[n]));
    cout<<res<<endl;  
    }
}