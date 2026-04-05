#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l=0,r=1;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++)
        {
          int x;
          cin>>x;
           v.push_back(x);
        }
     sort(v.begin(),v.end());

     for(int i=2; i<n; i++)
        {
          if(v[l]+v[r]>v[i])
            {
                cout<<"YES";
                return 0;
            }
          else
            {
                l++;
                r++;
            } 
        }

       cout<<"NO"; 
    return 0;
}