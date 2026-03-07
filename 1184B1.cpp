#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,b;
    cin>>s>>b;

    vector<int> v;
    while(s--)
      {
        int x;
        cin>>x;
         v.push_back(x);
      }

    map<int,int>m;
    while(b--)
       {
         int x,y;
         cin>>x>>y;
          m[x]+=y;
       }  

    auto it1=m.begin();
        it1++;   
    for(auto it=m.begin();it1!=m.end();it++,it1++)
         (*it1).second+=(*it).second;


    for(auto it=v.begin();it!=v.end();it++)
       {
         it1 = m.upper_bound(*it);
        if(it1 == m.begin())
             cout << 0 << " ";
        else
            {              
                it1--;
                cout<<(*it1).second<<" ";
            } 
         
       }

    return 0;
}