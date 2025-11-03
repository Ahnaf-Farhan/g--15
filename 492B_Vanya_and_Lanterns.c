#include <stdio.h>
#include <stdlib.h>

int cmp(const void *x, const void *y)
{
    long long a = *(const long long *)x;           //boro test case er difference ber krte
    long long b = *(const long long *)y;
    if (a < b) return -1;
    if (a > b) return 1;
    return 0;
}

int main()
{
    long long n, l;
    scanf("%lld %lld", &n, &l);
    printf("%lld %lld \n", n,l);
    long long lit[2000];
    for (long long i = 0; i < n; i++)
        scanf("%lld", &lit[i]);

    qsort(lit, n, sizeof(long long), cmp);      //sort krte hbe pashapashi lit gulor difference ber krte 

    double max_gap = 0;                 //double e hisheb
    for (long long i = 0; i < n - 1; i++)       // ak loop e gap+max rad berhcce 
    {
        // long long gap = lit[i + 1] - lit[i];   
        // printf("%lld gap \n", gap);        //main fact
        if ((lit[i + 1] - lit[i]) > max_gap)
        {
            max_gap = lit[i + 1] - lit[i];
            printf("%lld max gap \n", max_gap);        //main fact
        }
    }

    for(int i=0; i<n-1; i++)
        printf("%lld ", lit[i]);

    double left_edge = lit[0];
    double right_edge = l - lit[n - 1];
          
    printf("before ans: %lld \n", max_gap);        //main fact

    double ans = max_gap/2.0;                     // rad ber krte 2 diye division
    if (left_edge > ans)                            // ai dui left/right edge er condition o count krte hbe
        ans = left_edge;

    printf("left edge %lld and %lld ans",left_edge,ans);
    if (right_edge > ans)
        ans = right_edge;
    printf("right %lld %lld ans \n",right_edge, ans);

    printf("%.10lf\n", ans);          //.10 diye polong long er por 10 ghor prjntw prlong long ashbe
                                           //%lf format specifier
    return 0;
}