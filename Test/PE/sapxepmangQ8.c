#include <stdio.h>
#define MAX 1000

int main()
{
    int array[MAX];
    int maxArr;

    printf("Input max of Array: ");
    scanf("%d", &maxArr);
    // input
    for (int i = 1; i < maxArr + 1; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 1; i < maxArr + 1; i++)
    {
        if (i % 2 != 0 && array[i] % 2 != 0)
        {
            printf("\n%d", array[i]);
        }
    }
}