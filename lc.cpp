#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,sum;
    cin>>a>>b;

    int cycle=min(a.size(),b.size()); 
    int j=0; 
    char carry='0';   
    for(int i=1;i<cycle-1;i+=2)
       {       
         int digit=(a[i]-'0') + (b[i]-'0') + (carry-'0');//a[i]+b[i]+carry-3*'0';        
          if(digit<10)
            {
                sum.push_back(digit + '0');
                sum.push_back(',');
                carry='0';
            }
          else if(digit==10) 
            {
                sum.push_back('0');
                sum.push_back(',');
                carry='1';
            } 
          else 
            {
                sum.push_back((digit % 10) + '0');
                sum.push_back(',');
                carry='1';
            }       
       }

    if(a.size()==b.size())   
      {
        sum.pop_back();
        sum='['+sum+']';
        cout<<sum;
        return 0;
      }  

    if(a.size() > b.size())
      {
        for(int i=cycle-1;i<a.size();i+=2)
           { 
             int digit=a[i]+carry-2*'0';  
             if(digit<10)
            {
                sum.push_back(digit + '0');
                sum.push_back(',');
                carry='0';
            }
          else if(digit==10) 
            {
                sum.push_back('0');
                sum.push_back(',');
                carry='1';
            } 
          else 
            {
                sum.push_back((digit % 10) + '0');
                sum.push_back(',');
                carry='1';
            }       
           }
      }

    else
      {
        for(int i=cycle-1;i<b.size();i+=2)
           { 
             int digit=b[i]+carry-2*'0';  
             if(digit<10)
            {
                sum.push_back(digit + '0');
                sum.push_back(',');
                carry='0';
            }
          else if(digit==10) 
            {
                sum.push_back('0');
                sum.push_back(',');
                carry='1';
            } 
          else 
            {
                sum.push_back((digit % 10) + '0');
                sum.push_back(',');
                carry='1';
            }       
           }
      }

     if(carry=='1')
       {
        sum.pop_back();
        sum.push_back('1');
        sum='['+sum+']';
        cout<<sum;
        return 0;
       }     

    sum.pop_back();
        sum='['+sum+']';
        cout<<sum;
        return 0;

}