#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    float S;
    S = 0;
    do
    {
        printf("\nNhap n: ");
        scanf("%d", &n);
        if(n < 1)
        {
            printf("\nN phai lon hon hoac bang 1. Xin nhap lai !");
        }
    }while(n < 1);

    for(i = 0; i < n; i++)
    {
        S = S + 1/i ;
    }
    printf("\nTong la: %f", S);

    getch();
    return 0;
}

