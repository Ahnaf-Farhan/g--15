#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    int min=(n/2)+n%2;
    if(n<m)
       cout<<-1;
    else
       {
         if(min%m==0)
            cout<<min;
         else
            {
                cout<<min+(m-min%m);
            }   
       }
    
    return 0;
}