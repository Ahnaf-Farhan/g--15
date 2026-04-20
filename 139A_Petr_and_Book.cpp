#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,i;
    cin>>n;

    vector<int> v(7);
    for(int &x:v)
       cin>>x;

    for(i=0;n>0; i++)
        {
           if(i%7==0)
             i=0;

           n-=v[i];  
        }   

        if(i%7==0)
          i=0;

      cout << (i == 0 ? 7 : i);

    return 0;
}