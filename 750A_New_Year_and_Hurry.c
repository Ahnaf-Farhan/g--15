#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);

    int total=4*60;
    int travel=k;
    int contest=total-travel;

    int count=0;
    int cf=0;
    while (count < n) 
    {
        cf += 5 * (count + 1);
        if (cf > contest)
            break;
        count++;
    }

    printf("%d",count);     
}