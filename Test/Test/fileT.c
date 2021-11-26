#include <stdio.h>

int main()
{
	char s[100];
	int i;
	printf("Input: ");
	gets(s);
	printf("Output: ");
	for(i = 0; i < strlen(s); i++)
		printf("%d", s[i]);
}
