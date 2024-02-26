#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char *a, const char *b)
{
    if (strcmp(a, b) > 0)
    {
        return 0;
    }
    else if (strcmp(a, b) < 0)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int lexicographic_sort_reverse(const char *a, const char *b)
{
    if (strcmp(b, a) > 0)
    {
        return 0;
    }
    else if (strcmp(b, a) < 0)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int sort_by_number_of_distinct_characters(const char *a, const char *b)
{
    int dist_charsa[256] = {0};
    int dist_charsb[256] = {0};
    for (int i = 0; i < strlen(a); i++)
    {
        dist_charsa[(int)a[i]] = 1;
    }
    for (int i = 0; i < strlen(b); i++)
    {
        dist_charsa[(int)b[i]] = 1;
    }
    int counta = 0;
    int countb = 0;
    for (int i = 0; i < 256; i++)
    {
        if (dist_charsa[i] > 0)
            counta++;
        if (dist_charsb[i] > 0)
            countb++;
    }
    if (counta > countb)
    {
        return 0;
    }
    else if (counta < countb)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int sort_by_length(const char *a, const char *b)
{
    size_t length_a = strlen(a);
    size_t length_b = strlen(b);

    if (length_a > length_b)
    {
        return 1;
    }
    else if (length_b > length_a)
    {
        return 0;
    }
    else
    {
        if (strcmp(a, b) > 0)
        {
            return 0;
        }
        else if (strcmp(a, b) < 0)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
}

void string_sort(char **arr, const int len, int (*cmp_func)(const char *a, const char *b))
{
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            char *temp = arr[i];
            if (cmp_func(arr[j], arr[i]) > 0)
            {
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    char **arr;
    arr = (char **)malloc(n * sizeof(char *));

    for (int i = 0; i < n; i++)
    {
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }

    string_sort(arr, n, lexicographic_sort);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");
}