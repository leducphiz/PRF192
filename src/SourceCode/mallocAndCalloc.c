#include <stdio.h>
#include <stdlib.h>

void showInfo(int *a)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%5d", a[i]);
    }
    printf("\n");
}

int main()
{
    //malloc
    puts("Malloc: ");
    int *a = (int *)malloc(10 * sizeof(int));
    showInfo(a);
    free(a);

    //calloc
    puts("Calloc: ");
    a = calloc(10, sizeof(int));
    showInfo(a);
    free(a);
}
