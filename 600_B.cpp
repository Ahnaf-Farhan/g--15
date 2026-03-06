#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;

    vector<int> v;
    for(int i=0; i<n; i++)
      {
        int x;
        cin>>x;
          v.push_back(x);
      }

    sort(v.begin(),v.end());
    while(q--)
       {
         int x;
         cin>>x;

          if(x<v[0])
            cout<<0<<" ";
          else
            {
               cout<<upper_bound(v.begin(),v.end(),x)-v.begin()<<" ";
            }  
       }  
    return 0;
}