#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
      {
        int n;
        cin>>n;
        int len=n;
        string st;
        cin>>st;
        for(int i=0;i<n/2;i++)
            {
                if(st[i]!=st[n-1-i])
                  len-=2;
                else
                   break;  
            }  
            
        cout<<len<<endl;    
      }
}