#include <stdio.h>
#define MAX 10

int *Input()
{
    static int a[MAX];
    // static int a[10];
    for (int i = 0; i < MAX; i++)
    {
        scanf("%d", &a[i]);
    }
    return a;
}

void Print(const int a[])
{
    for (int i = 0; i < MAX; i++)
    {
        printf("%d\n", a[i]);
    }
}

void bubbleSort(int a[])
{
    for (int i = 0; i < MAX; i++)
    {
        for (int j = MAX - 1; j > i; j--)
        {
            if (a[j] < a[j - 1]) // edit here to dao nguoc lai :))
            {
                int tmp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = tmp;
            }
        }
    }
}

int main()
{
    int *a;

    a = Input();

    bubbleSort(a);
    Print(a);
}
