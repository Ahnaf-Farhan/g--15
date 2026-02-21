#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,min=0;
    cin>>n;

    string s;
    cin>>s;
    map<vector<char>,int>m;
    for(int i=0; i<n-1; i++)
        {
            vector<char> v;
            v.push_back(s[i]);
            v.push_back(s[i+1]);
            // string st=s[i]+s[i+1];
          m[v]++;
        }

      map<vector<char>,int>  :: iterator it1;
        for(auto it=m.begin();it!=m.end();it++)
           {
             if((*it).second>min)
               {
                 min=(*it).second;
                 it1=it;
               }
           }

        for(char c : (*it1).first)
           cout << c;
    return 0;
}