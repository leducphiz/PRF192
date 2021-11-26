// hàm đệ quy
/*
void recurse()
{
    ... .. ...
    recurse();
    ... .. ...
}
 
int main()
{
    ... .. ...
    recurse();
    ... .. ...
}
*/

#include <stdio.h>

//
int sum(int a)
{
    if (a == 0)
        return 0;
    return a + sum(a - 1);
}

//

int main()
{
    int n;
    printf("input n :  ", n);
    scanf("%d", &n);
    int s = sum(n);
    printf("\n Sum = %d", s);
}