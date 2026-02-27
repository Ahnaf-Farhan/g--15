#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);   
     map<string,string>m;
    m[">="]="<";
    m["<"]=">=";
    m["<="]=">";
    m[">"]="<=";

    long long l = -2000000000LL;
    long long r =  2000000000LL;
    int n;
    cin >> n;
    while(n--)
       {
         string s;
         long long x;
         char c;
           cin>>s>>x>>c;

         if(c=='N')
           s=m[s];


         if(s==">=")
           {
             if(r>=x)
               l = max(l, x);
             else
               {
                cout<<"Impossible";  
                 return 0;
               }  
           }  
          
          if(s=="<")
           {
             if(l<x)
               r = min(r, x-1);
             else
               {
                cout<<"Impossible";  
                 return 0;
               }
           } 

          if(s=="<=")
           {
             if(l<=x)
               r = min(r, x);
             else
               {
                cout<<"Impossible";  
                 return 0;
               }
           } 

          if(s==">")
           {
             if(r>x)
                l = max(l, x+1);
             else
               {
                cout<<"Impossible";  
                 return 0;
               }  
           } 
       }

       cout<<l;
   
    return 0;
}