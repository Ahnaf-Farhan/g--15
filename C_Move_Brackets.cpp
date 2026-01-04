#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
       {
         int n;
         cin>>n;
         string s;
         cin>>s;
         int res=0;
         
        //  if(s[0]==')')
        //    {
        //      for(int i=0;i<n;i++)
        //          {
        //             if(s[i]==')')
        //               res+=1;
        //             else
        //                break;  
        //          }
        //        cout << res << endl;  
        //    }
        //   else if(s[n-1]=='(')
        //     {
        //         for(int i=n-1;i>=0;i--)
        //           {
        //             if(s[i]=='(')
        //               res+=1;
        //             else
        //                break;
        //           }
        //        cout << res << endl;   
        //     } 
        //   else  
        //     {
                int l=0,r=0;
                for(int i=0;i<n;i++)
                 {
                    if(s[i]=='(')
                      l+=1;
                    else
                     r+=1;

                   if(r>l)
                      {
                        res+=1;
                        r--;
                        // l=0;
                        // r=1;
                      }   
                        
                 }
            
              cout<<res<<endl;  
            }  
       }
//}