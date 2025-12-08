#include<stdio.h>
int cmp (const void *x,const void *y)
   {
     return *(int *)y-*(int *)x;
   }
   
int bore(int distinct_number[],int i,int r,int count,int point[],int distinct)
    {
       
        count+=point[i];
        if(distinct_number[i+1]==r)
          {
            i+=2;
            r=distinct_number[i+2];
          }  

           if(i==distinct)
             return count;

          return count+bore(distinct_number,i,r,count,point,distinct);
    }   
int main()
{
    long long n;
    scanf("%lld",&n);

    int game[n];
    for(long long i=0;i<n;i++)
       {
         scanf("%d",&game[i]);
       }

       qsort(game,n,sizeof(int),cmp);
 
//dsitinct number r sonkha       
    int first=game[0];
    int distinct=1;
    for(long long i=0;i<n;i++)
       {
         if(first!=game[i])
            {
                distinct+=1;
                first=game[i];
            } 
            
        }    

//akhn dsitinct individuas gulok store krbo
int distinct_number[distinct];
int garbage=game[0];
    distinct_number[0]=game[0];
int k=1;
for(int i=0;i<distinct;i++)
    {
        if(game[i]!=garbage)
          {
            distinct_number[k++]=game[i];
            garbage=game[i];
          }
    }

//ai array te distinct er occurance store hbe        
    int occur[distinct];
for(int i=0;i<distinct;i++)
    {
        occur[i]=0;
        for(int j=0;j<n;j++)
           {
             if(distinct_number[i]==game[j])
                occur[i]+=1;
           }
    }    

//individual er point er array
     int point[distinct];
for(int i=0;i<distinct;i++)
    {
        point[i]=distinct_number[i]*occur[i];
    }
    
    int distinct1=distinct;
    int i=0;
    int final[distinct];
    int res[distinct];
    while(distinct1--)
        {
            int x=distinct_number[i++];
           int l=x-1;
           int r=x+1;
           
            res[i++]=bore(distinct_number,i,r,0,point,distinct);
            
        }

    qsort(res,distinct,sizeof(int),cmp);
    printf("%d\n",res[0]);    

}