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
        int n,flag=0;
        cin>>n;

        set<int>s;
        for(int i=0; i<n; i++)
            {
              int x;
              cin>>x;
                s.insert(x);
            }

      int mex=0;
       for(auto it=s.begin();it!=s.end();)
           {
              int ct=0;
            auto temp=it;
            it++;
             while(it!=s.end() && *it - *temp == 1)
                 {
                    ct++;
                    temp=it;
                    it++;
                 } 

              mex=max(ct,mex);   
           }

    cout<<mex+1<<endl;

        }

//                        
// for(int i=0; i<n; i++)
//             {
            
//             auto temp=it;
//             int dr=*temp-0;
//     if(n==1)
//            cout<<1<<endl;
//     else
//         {
//             if(it==s.begin())
//               {                
//                 it++;
                

//                 while(it!=s.end())
//                      {
//                         if(*it-*temp==1)
//                           {
//                             temp=it;
//                              it++;
//                           }
//                         else
//                           break;
//                      }
//               }


//              auto it1=s.lower_bound(x);  
//              if(it1!=s.begin())
//               {
//                 auto temp1=it1;
//                 it1--;
//                 dr=0-*it1;

//                  while(temp1!=s.end())
//                      {
//                         if(*temp1-*it1==1)
//                           {
//                             temp1++;
//                              it1++;
//                           }
//                         else
//                           {
//                             flag=1;
//                             it1.insert(max(*it1,*temp1));
//                             cout<<(*it1)+dr+1<<endl;
//                             break;
//                           }  
//                      }
//               } 


//               if(!flag)
//                  cout<<(*temp)-dr+1<<endl;
           
//         }
        
//     }
// }
    
    return 0;
}