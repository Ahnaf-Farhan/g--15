#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    vector<int>v;
    for(int i=1;i<n;i++)
       {
        int x;
        cin>>x;
         v.push_back(x);
       }

    int i=v[0]+1;
       if(i==t)
           {
            cout<<"YES";
            return 0;
           } 
       else if(i>t)
           {
            cout<<"NO";
            return 0;
           }    
       else
         i--;


    while(i<n)
       {
         if(i+1==t)
           {
            cout<<"YES";
            break;
           } 
         else if(i+1>t)
           {
            cout<<"NO";
            break;
           }
         else
         {

            i+=v[i];   
         }
           
       }   
    
    return 0;
}