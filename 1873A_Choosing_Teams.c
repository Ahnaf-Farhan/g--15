#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);

    int arr[n];
    int count=0;
    for(int i=0;i<n;i++)
      {
        scanf("%d",&arr[i]);

        if(arr[i]<=5-k)
          count+=1;
      }
      
    printf("%d",count/3);  

}