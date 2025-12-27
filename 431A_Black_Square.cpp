#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    for(int i=0;i<4;i++)
       {
         int x;
         cin>>x;
         v.push_back(x);
       }

    int cal=0;
    string x;
    cin>>x;
    for(int i=0;i<x.size();i++)
        {
            int digit=(x[i]-'0');
            cal+=v[digit-1];
        }
    cout<<cal;   
}