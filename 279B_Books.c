#include<stdio.h>
int fun(int book[],int i,int n,int t,int max)
    {     
       int count=0; 
       int cf=0;
        for(int j=i;j<n;j++)
        {
          cf+=book[j];
         if(cf<=t)
           count+=1;
         else
           break;  
        } 
        
        if(i==n)
        return max;

      if(max<count)
        max=count;
      return fun(book,i+1,n,t,max);   
    }
int main()
{
    int n,t;
    scanf("%d %d",&n,&t);
    
    int book[n];
    for(int i=0;i<n;i++)
       scanf("%d",&book[i]);
  
    int max=0;

     int ch;

      ch=fun(book,i,n,t,0);

    printf("%d",ch );   
}