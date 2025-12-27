#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double res=0;
    for(int i=1;i<=n;i++)
       {
         int x;
         cin>>x;
         res+=x;
       }
     
    cout<<  res/n <<endl;
}