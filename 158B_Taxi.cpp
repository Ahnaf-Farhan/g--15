#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>m;
    while(n--)
    {
        int x;
        cin>>x;

        m[x]++;
    }

    int cm=min(m[3],m[1]);
    m[4]+=cm;
    m[3]-=cm;
    m[1]-=cm;

    if(m[2]>1)
      {
        m[4]+=m[2]/2;
        m[2]=m[2]%2;
      }

    if(m[2]!=0)
      {
        
             m[4]++;
             m[2]=0;
             if(m[1] >= 2) 
                m[1] -= 2;
             else          
                m[1] = 0; 
           
        // else
        //    {
        //      m[2]=0;
        //      m[1]--;
        //      m[4]++;
        //    }   
      }

      
    if(m[1]>=4)
      {
             m[4]+=m[1]/4;
             m[1]-=(m[1]/4)*4;
             
             if(m[1]<4 && m[1]!=0)
               {
                 m[4]++;
                 m[1]=0;
              }           
      }
    else if(m[1]!=0)
      {
         m[4]++;
         m[1]=0;
      }  
      
    int res=0;
    for(auto it =m.begin();it!=m.end();it++)
         res+=(*it).second;
       
    cout<<res;
    return 0;
}