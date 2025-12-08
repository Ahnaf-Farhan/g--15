#include <stdio.h>
#include <stdlib.h>

int cmp(const void *x, const void *y) {
    return *(int *)x - *(int *)y;
}

int main() {
    int n;
    scanf("%d", &n);

    int rib[3];
    for (int i = 0; i < 3; i++)
        scanf("%d", &rib[i]);

    qsort(rib, 3, sizeof(int), cmp); // ছোট থেকে বড়

    int max_count = 0;

    for (int i = 0; i < 3; i++) 
    { // 1st piece size
        int j = n / rib[i];

        while (j >= 0) 
        {
            int rem = n - rib[i] * j;

            // এখন rem কে rib[i+1] দিয়ে কাটার চেষ্টা করবো
            if (i + 1 < 3) 
            {
                int k = rem / rib[i + 1];

                while (k >= 0) 
                {
                    int rem2 = rem - rib[i + 1] * k;

                    // এখন rem2 কে rib[i+2] দিয়ে পুরো divide হয় কিনা দেখি
                    if (i + 2 < 3 && rem2 % rib[i + 2] == 0) 
                    {
                        int count = j + k + rem2 / rib[i + 2];
                        if (count > max_count)
                            max_count = count;
                    }

                    k--;
                }
            }

            j--;
        }
    }

    printf("%d\n", max_count);
    return 0;
}