#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    scanf(" %c", &ch);  // Notice the space before %c to consume any preceding newline or whitespace character
    char s[100];
    scanf(" %s", s);
    char sen[100];
    scanf(" %[^\n]", sen);
    
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}
