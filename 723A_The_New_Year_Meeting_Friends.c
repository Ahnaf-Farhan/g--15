#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x1,x2,x3;
    scanf("%d %d %d",&x1,&x2,&x3);

    //int mid = (min + max) / 2;এটা সব সময় সঠিক নয়।
    //কারণ optimal point সবসময় (min+max)/2 না, বরং তিনটা সংখ্যার median (middle value after sorting) হবে।


    // so sort manually
    if (x1 > x2) 
       { int t = x1; x1 = x2; x2 = t; }       //jst swap

    if (x2 > x3) 
       { int t = x2; x2 = x3; x3 = t; }

    if (x1 > x2)                           //laast e ai condition check hbe
       { int t = x1; x1 = x2; x2 = t; }

    int mid = x2;                         // median
    int sum = abs(x1 - mid) + abs(x2 - mid) + abs(x3 - mid);       
   
    printf("%d\n",sum);       

}
