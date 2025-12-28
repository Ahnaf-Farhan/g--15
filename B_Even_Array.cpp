#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
      {
        int n,e=0,o=0,x;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
           {
             cin>>x;
             v.push_back(x);
             if(i%2 != x%2)
                {
                    if(x%2==0)
                      e++;
                    else 
                      o++;  
                }
           }

           if(e==o)
             cout<<e<<endl;
           else 
              cout<<-1<<endl;  
      }
}