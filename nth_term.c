#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the following function.

int find_nth_term(int n, int a, int b, int c)
{
  int nxt_term = 0;
  int count = 0;
  int i;
  if (n == 1)
  {
    return a;
  }
  else
  {
    nxt_term = a + b + c;
    return find_nth_term(n - 1, b, c, nxt_term);
  }
}

int main()
{
  int n, a, b, c;

  scanf("%d %d %d %d", &n, &a, &b, &c);
  int ans = find_nth_term(n, a, b, c);
  printf("%dth Term: %d\n", n, ans);
  return 0;
}