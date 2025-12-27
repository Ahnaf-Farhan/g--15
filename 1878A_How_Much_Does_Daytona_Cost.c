#include<stdio.h>
int main()
{
   int t,n,k;
   scanf("%d",&t);
   for(int i=1;i<=t;i++)
   {
     scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)
       {
         scanf("%d",&arr[i]);
       }

       int l,r;
    for(int i=0;i<n;i++)
       {
           if(arr[i]==k)
              {
                l=i;
                break;
              }  

           if(i==n-1)
              {
                printf("NO");   
                goto finis;            
              }   
       }  
      
       
     for(int i=n-1;i>=0;i++)        
            if(arr[i]==k)
               r=i;


    int common=0;
     for(int i=0;i<n;i++)
       {
         if(k==arr[i])
           common+=1;
       }
       
       
     int count[r-l+1];  
     int k=0;        
     while(l<r)
        {     count[k]=0;       
          for(int i=l;i<=r;i++)
             {
                if(arr[l]==arr[i])
                   count[k]+=1;
             }
           k+=1;  
           l+=1;
        }       
        

        int last=0;
     for(int i=l;i<=r;i++)
             {
                if(common>=count[i])
                  {
                     last+=1;
                     continue;
                  } 
               
                else
                   {
                     printf("NO");
                     goto finis;
                   }  
             }    
              
         printf("YES"); 
         
      finis:
        printf("\n");   
   } 
   

}