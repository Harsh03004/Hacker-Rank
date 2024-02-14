#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Complete the following function.

void calculate_the_maximum(int n, int k)
{
    int i, j;
    int a, b, c;
    int max1 = 0;
    int max2 = 0;
    int max3 = 0;

    for (i = 1; i <= n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            a = i & j;
            b = i | j;
            c = i ^ j;

            if (a > max1 && a < k)
            {
                max1 = a;
            }
            if (b > max2 && b < k)
            {
                max2 = b;
            }
            if (c > max3 && c < k)
            {
                max3 = c;
            }
        }
    }
    printf("%d\n", max1);
    printf("%d\n", max2);
    printf("%d\n", max3);
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
