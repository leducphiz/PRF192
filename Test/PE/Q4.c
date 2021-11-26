#include <stdio.h>

int main()
{
    char str[100];
	gets(str);
    printf("\nOUTPUT:\n%s", strrev(str));
    return 0;
}
