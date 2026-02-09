#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<int> a,b;
        for(int i=0; i<n; i++)
            {
              int x;
              cin>>x;
               a.push_back(x);
            }
          a.push_back(0);

         for(int i=0; i<n; i++)
            {
              int x;
              cin>>x;
               b.push_back(x);
            }    
          b.push_back(0);  

      for(int i=n-1; i>=0; i--)       
          a[i]=max({a[i], b[i],a[i+1]});
       
      for(int i=n-1; i>=0;i--)
          a[i]+=a[i+1];

       while(q--)
           {
             int l,r;
             cin>>l>>r;
             l--;r--;
             
             cout<<a[l]-a[r+1]<<" ";
           }     

    cout<<endl;
          }
    return 0;
}