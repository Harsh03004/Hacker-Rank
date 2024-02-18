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

    // Update specific elements of the array
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j < 2 * n - i-1; j++)
        {
            a[i][j] = n - 1;
            a[j][i] = n - 1;
            a[j][2 * n - i - 2] = n - 1;
            a[2 * n - i - 2][j] = n - 1;
        }
    }

    // Print the array
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            printf("%d\t", a[i][j]);
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
