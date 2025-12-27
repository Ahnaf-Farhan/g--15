#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
      {
        int n;
        string s;
        cin>>n>>s;

        int res=0;
        for(int i=0;i<n;i++)
           {
             if('A'<=s[i]&&'Z'>=s[i])
                {
                    int count=1;
                    for(int j=i+1;j<n;j++)
                       {
                         if(s[i]==s[j])
                           {
                            count+=1;
                            s[j]='0';
                           }                         
                       }
                    res+=count+1;
                }
           }

         cout<<res<<endl;  
      }
}