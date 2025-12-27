#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
  while(t--) 
  {
    string s;
    cin>>s;
    if(s.size()%2!=0)
      {
        cout<<"NO"<<endl;
      }
    else 
      {
       for(int i=0;i<s.size()/2;i++)
            {
                if(s[i]==s[(s.size()/2)+i])
                  {
                    if(i==s.size()/2-1)   
                      cout<<"YES"<<endl;

                     continue;
                  }
                  
                else
                  {
                    cout<<"NO"<<endl;
                    break;
                  }  

                
            }

          
      }  
  }
}