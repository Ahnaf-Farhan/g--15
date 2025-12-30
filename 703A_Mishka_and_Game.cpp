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
         v[i].first=x;
         v[i].second=y;
       }

       int m=0,c=0;
     for(int i=0;i<n;i++)
       {
         if(v[i].first<v[i].second)
            c+=1;
         else if((v[i].first>v[i].second))
            m+=1;   
         
       }
       
    if(m>c)
       cout<<   "Mishka"<<endl;
    else if(m<c) 
       cout<< "Chris" <<endl;
    else 
       cout<< "Friendship is magic!^^"<<endl;  
}