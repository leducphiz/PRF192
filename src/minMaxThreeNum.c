#include <stdio.h>

// hàm tìm min 2 số
int MinTwoNum(int a, int b)
{
    return (a < b ? a : b);
    /*
        if(a < b) return a;
        else return b;
    */
}

// hàm tìm max 2 số
int MaxTwoNum(int a, int b)
{
    return (a > b ? a : b);
}

// hàm tìm min 3 số nguyên
int MinThreeNum(int a, int b, int c)
{
    return MinTwoNum(a, MinTwoNum(b, c));
}
// hàm tìm max 3 số
int MaxThreeNum(int a, int b, int c)
{
    return MaxTwoNum(MaxTwoNum(a, b), c);
}

int main()
{
    int fnum, snum, tnum;
    printf("\nInput first number:");
    scanf("%d", &fnum);
    printf("\nInput second number:");
    scanf("%d", &snum);
    printf("\nInput three number:");
    scanf("%d", &tnum);

    //
    printf("\nMax: %d", MaxThreeNum(fnum, snum, tnum));
    printf("\nMin: %d", MinThreeNum(fnum, snum, tnum));

    return 0;
}
