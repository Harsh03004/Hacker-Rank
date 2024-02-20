#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s)
{
    if(n==1){
        return 0;
    }
    else{
        for(int i=n-2;i>=0;i--){
            for(int j=n-1;j>i;j--){
               if(strcmp(s[j],s[i])>0){
                    char *temp=s[i];
                    s[i]=s[j];
                    s[j]=temp;
                    for(int l=i+1,k=n-1;l<k;l++,k--){
                        char *temp=s[l];
                        s[l]=s[k];
                        s[k]=temp;
                    }
                     return 1;
                }
            }
        }
       
    }
    return 0;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}