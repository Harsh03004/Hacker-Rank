#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char *num=(char *)malloc(1000*sizeof(char));
    int f[10] = {0};
    int i;
    scanf("%s", num);
    for (i = 0; i < strlen(num); i++)
    {
        int temp = num[i] - '0';
        if ((temp >= 0) && (temp <= 9))
        {
            f[temp]++;
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", f[i]);
    }
    return 0;
}
