#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n=4,dif=0;
      

    vector<int> v;
    for(int i=0; i<n; i++)
        {
          int x;
          cin>>x;
            v.push_back(x);
        }

       int max=*max_element(v.begin(),v.begin()+3) ;
       for(int i=0; i<3; i++)       
          dif+=max-v[i];
        
        if(dif>v[3])
         cout<<"NO"<<endl;
        else
          {
            dif=v[3]-dif;
        if(dif%3==0)
          cout<<"YES"<<endl;
        else
          cout<<"NO"<<endl;
          }   
        
    }
      

    return 0;
}