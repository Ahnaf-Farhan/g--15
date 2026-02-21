#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,o=0,f=0;
     string s;
     cin>>n>>s;

     for(int i=0; i<n; i++)
        {
          if(s[i]=='1')
            f++;
          else
            o++;  
        }

      f=min(f,o);  
      cout<<n-2*f;  
    return 0;
}