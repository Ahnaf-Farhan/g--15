#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l=1,r=1000000;
    string s;
       int x=(l+r+1)/2;
    while( l<=r)
        {
          cout<<x<<endl;
          cout.flush();

          cin>>s;
          if(s==">=")
            l=x;
          else
            r=x-1;
            
           x=(l+r+1)/2; 

           if(l>=r)
            {
                cout<<"! "<<x<<endl;
                cout.flush(); 
                break;
            } 
        }


    return 0;
}