#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,res=0,sum=0;
    cin>>n;

    vector<int> v;
    for(int i=0; i<12; i++)
        {
          int x;
          cin>>x;
            v.push_back(x);
        }

    sort(v.begin(),v.end(),greater<int>());
    
            for(int j=0; j<12 && sum<n; j++)
                {
                  res+=1;
                  sum+=v[j];
                }
       if(sum<n)
         cout<<-1;
       else    
         cout<<res;  
    return 0;
}