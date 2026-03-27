#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    map<string,string>mp;
    while(m--)
       {
         string s,s1;
         cin>>s>>s1;

         if(s.size()<s1.size())
           mp[s]=s;
         else if(s.size()>s1.size())
           mp[s]=s1;
         else
           mp[s]=s; 
              
       }

      while(n--)
         {
            string s;
            cin>>s;
             
            cout<<mp[s]<<" ";
         } 
    return 0;
}