#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int i;
    int sum;
    for(i=1;i<=5;i++){
        int r;
        r=n%10;
        n=n/10;
        printf("%d\n",r);
        sum+=r;
    }
    printf("%d",sum);
    return 0;
}