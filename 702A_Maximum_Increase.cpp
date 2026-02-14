#include<bits/stdc++.h>
using namespace std;
int main()
{
    int res=0,temp=1;

    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++)
        {
          int x;
          cin>>x;
            v.push_back(x);
        }

    for(int i=0; i<n-1; i++)
        {
          if(v[i]<v[i+1])
            temp+=1;
          else
            {
                res=max(res,temp);
                temp=1;
            }  
        }   
      res=max(res,temp);  
      cout<<res<<endl;  
    return 0;
}