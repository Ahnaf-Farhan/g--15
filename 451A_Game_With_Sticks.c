#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);

    int min=n;
    if(n>m)
      min=m;

    if(min%2==0)
      printf("Malvika");
    else
      printf("Akshat");    
}

// (nxn) square matrix e, n bar stick soran jabe.
//same goes,n*m matrix eo,row ba column jeta shb theke choto,
//toto bar stick soran jae,baki |n-m|ta,stick thake jara literally parallel
//means- kno cross point nai.tai kno stick e tulte parbe nh,nd he loses