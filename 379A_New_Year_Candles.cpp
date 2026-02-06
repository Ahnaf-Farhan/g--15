#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int h=a;
    int out=a%b;
    
    while(a)
         {
            a/=b;
            h+=a;

            a+=out;

            if(a>=b)
              out=a%b;
            else
               break;  
         }

       cout<<h;  
    return 0;
}