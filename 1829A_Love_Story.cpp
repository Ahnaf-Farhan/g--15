#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string st="codeforces";
    while(t--)
       {
         string s;
         cin>>s;
         int count=0;
         for(int i=0;i<10;i++)
            {
                if(st[i]!=s[i])
                  count+=1;
            }

          cout<<count<<endl;  
       }
}