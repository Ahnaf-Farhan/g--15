#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;

	 vector<string>v(n);

	 for(int i=0;i<n;i++)
	   {
	     string st;
	     cin>>st;

	     v[i]=st;
	   }



      vector<string>temp;
	  for(int i=1;i<n;i++)
	   { 
	   	   if(v[0]!=v[i])
             {
             	temp.push_back(v[i]);
             	break;
             }	
       }
      //alt:
      //string temp;
      //.....temp=v[i]; 



      int count1=1;
       for(int i=1;i<n;i++)
	   { 
	   	   if(v[0]==v[i])        
	            count1+=1;
             
       }
             
    (count1>n-count1)?cout<<v[0]:cout<<temp[0]; //temp[0] use krbi     
}