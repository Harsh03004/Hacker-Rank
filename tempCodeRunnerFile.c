for (int i = 1; i < n; i++)
    {
        for (int j = i; j < 2 * n - i - 1; j++)
        {
            a[i][j] = n - 1;
            a[j][i] = n - 1;
            a[j][2 * n - i - 2] = n - 1;
            a[2 * n - i - 2][j] = n - 1;
        }
    }
