#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
int op=(ch=='R')?-1:1;
    string st;
    cin>>st;

    map<int,char>m;

    m[0]='q';
    m[1]='w';
    m[2]='e';
    m[3]='r';
    m[4]='t';
    m[5]='y';
    m[6]='u';
    m[7]='i';
    m[8]='o';
    m[9]='p';
    m[10]='[';
    m[11]=']';
    m[12]='a';
    m[13]='s';
    m[14]='d';
    m[15]='f';
    m[16]='g';
    m[17]='h';
    m[18]='j';
    m[19]='k';
    m[20]='l';
    m[21]=';';
    m[22]='\'';  // single quote
    m[23]='\\';  // backslash
    m[24]='z';
    m[25]='x';
    m[26]='c';
    m[27]='v';
    m[28]='b';
    m[29]='n';
    m[30]='m';
    m[31]=',';
    m[32]='.';
    m[33]='/';
    
    for(int i=0; i<st.size(); i++)
        {
          for(int j=0; j<m.size(); j++)
            {               
              if(st[i]==m[j])
                {
                    cout<<m[j+op];
                }
            }
        }
    return 0;
}