#include <stdio.h>
#define MAX 100

int main()
{
    int arr[MAX];

    int n;

    //check input
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (n <= 0 || n > MAX);

    //input
    for (int i = 0; i < n; i++)
    {
        printf("\n INPUT arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    //output
    for (int i = 0; i < n; i++)
    {
        printf("\narr[%d] = %d", i, arr[i]);
    }
}