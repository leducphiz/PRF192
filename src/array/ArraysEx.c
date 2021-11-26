
#include <stdio.h>

int main()
{
    // int x;
    // printf("input x = ");
    // scanf("%d", &x);
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
    }

    printf("%d", arr[5]);
    getch();
}