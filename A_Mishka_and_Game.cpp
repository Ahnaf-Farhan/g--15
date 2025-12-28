#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)
       {
         int x,y;
         cin>>x>>y;
         v[i].push_back({x,y});
       }

     for(int i=1;i<n;i++)
       {
         v[i].first+=v[i-1].first ;
         v[i].second+=v[i-1].second;
       }
       
    if(v[n-1].first>v[n-1].second)
       cout<<   "Mishka"<<endl;
    else if(v[n-1].first<v[n-1].second) 
       cout<< "Chris" <<endl;
    else 
       cout<< "Friendship is magic!^^"<<endl;  
}