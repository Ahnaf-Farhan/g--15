#include<stdio.h>
int main()
{
    int n,m,a,b;
    scanf("%d %d %d %d",&n,&m,&a,&b);

    int offer=n/m;
    int rem=n%m;

    int case1=n*a;
    int case2=offer*b+rem*a;
    int case3=offer*b+b;

    int min=case1<case2 ? case1:case2;
    min=min<case3?min:case3;

    printf("%d\n",min);

}