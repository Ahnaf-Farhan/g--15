#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    vector<int>v;
    v.push_back(0);
    for(int i=1; i<=n; i++)
        {
            int x;
            cin>>x;
          v.push_back(x+v[i-1]);
        }
    cin>>m;
    for(int i=0; i<m; i++)
        {
          int x;
          cin>>x;
          
          int l=1,r=n;
          while (l<r)
          {
            int mid=(l+r)/2;
            if(v[mid] >= x)  
                r = mid;
            else
                l = mid + 1;
          }
        cout<<l<<endl;  
          
        }    


    return 0;
}