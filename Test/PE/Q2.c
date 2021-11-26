#include <stdio.h>

int main()
{
    int n, giaiThua = 1;
    scanf("%d", &n);
    printf("\nOUTPUT:\n");
    for (int i = 1; i <= n + 1; i++)
    {
        giaiThua *= i;
    }
    printf("%d", giaiThua);
}