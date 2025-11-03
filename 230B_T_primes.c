#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long long n, x;
    scanf("%lld", &n);
    // long long prime = malloc(n*sizeof(loxng long));/

    for (long long i = 0; i < n; i++)
    {
        scanf("%lld", &x);
        //  long long x = prime[i];
        int count = 0;

        for (long long j = 1; j * j <= x; j++)
        {
            if (x % j == 0)
            {
                count++; // divisor j
                if (j != x / j)
                    count++; // divisor x/j (different from j)
            }
        }

        if (count == 3)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}