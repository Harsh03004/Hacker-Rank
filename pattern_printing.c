#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    // Dynamic memory allocation for a 2D array
    int **a = (int **)malloc((2 * n - 1) * sizeof(int *));
    for (int i = 0; i < 2 * n - 1; i++)
    {
        a[i] = (int *)malloc((2 * n - 1) * sizeof(int));
    }

    // Initialize the array
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            a[i][j] = n;
        }
    }

    // Print the array
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            printf("%d\t", a[i][j]);
            a[i+1][j+1]=n-1,n-1;
        }
        printf("\n");
    }

    // Free the allocated memory
    for (int i = 0; i < 2 * n - 1; i++)
    {
        free(a[i]);
    }
    free(a);

    return 0;
}
