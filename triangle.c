#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
    int a;
    int b;
    int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle *tr, int n)
{
    float *s = (float *)malloc(n * sizeof(float));
    float *area = (float *)malloc(n * sizeof(float));
    for (int i = 0; i < n; i++)
    {
        s[i] = (tr[i].a + tr[i].b + tr[i].c) / 2.0;
        area[i] = sqrt(s[i] * (s[i] - tr[i].a) * (s[i] - tr[i].b) * (s[i] - tr[i].c));
    }
    for(int i=0;i<n;i++){
        if(area[i]>area[i+1] && area[i]>area[i+2]){
           float temp = area[i];
           area[i]=area[i+1];
           area[i+1]=temp;
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    triangle *tr = malloc(n * sizeof(triangle));
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
    }
    sort_by_area(tr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    }
    return 0;
}