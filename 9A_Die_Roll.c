#include<stdio.h>

int main()
{
    int x,y;
    scanf("%d %d\n",&x,&y);

    int max=x;
    if(max<y)
      max=y;

    max=(6-max+1);  
    // if(max==6)
    //   {
    //     printf("1/1");
    //     return 0;
    //   }  
    // if(max%2==0) 
    //   {
    //     printf("%d/%d",max/2,3);
    //     return 0;
    //   }
      
    // if(max%3==0)
    //   {
    //     printf("1/2");
    //     return 0;
    //   }  

    // if(max==1)
    //   printf("1/6");
    // else
    //   printf("5/6");       


    int denominator =6;
  for(int i=max;i<=2;i--)    
  {
    if(max%i==0 && denominator%i==0)
       max/=i;
       denominator/=i;
      break;   
  }
   printf("%d/%d",max,denominator); 
}