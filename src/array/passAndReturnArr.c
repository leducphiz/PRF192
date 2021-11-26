#include <stdio.h>

int *Input()
{
    static int a[10];
    //static int a[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    return a;
}

void Print(const int a[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("%5d", a[i]);
    }
}

int main()
{
    int a[10];

    int *b;

    b = Input();
    Print(b);
}
