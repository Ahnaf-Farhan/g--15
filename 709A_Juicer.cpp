#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,d,res=0,ct=0;;
    cin>>n>>b>>d;

    while(n--)
        {
            int x;
            cin>>x;

            if(x<=b)
              {
                res+=x;
                if(!(res<=d))
                   {
                     res=0;
                     ct+=1;
                   }
              }
        }

       cout<<ct; 
    return 0;
}