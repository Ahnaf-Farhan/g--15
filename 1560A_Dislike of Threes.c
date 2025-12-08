#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) 
    {
        int k;
        scanf("%d", &k);

        int i = 1;
        int count = 0;

        while(1) 
        {
            if(i % 3 != 0 && i % 10 != 3) 
            {
                count++;
                if(count == k) 
                {
                    printf("%d\n", i);
                    break;
                }
            }
            i++;
        }
    }
}