#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;

    if(n%2==0)
       cout<<(1LL << (n/2));
    else
     cout<<0;
    return 0;
}