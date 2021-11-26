/*
    bài toán đảo ngược số sử dụng hàm

    Exp: 1234->4321
    Giả sử với số n = 1234
    n = 1 * 1000 + 2 * 100 + 2 * 10 + 4 * 1
            10^3        10^2    10^1       10^0
    Đảo ngược thế nào?
    B1: num = 4
    B2: num = 4 * 10 + 3 = 43
    B3. num = 43 * 10 + 2 = 432
    B4. num = 432 * 10 + 1 = 4321

*/

#include <stdio.h>

int reverse(int n)
{
    int reNum = n % 10; // b1 lấy chữ số cuối cùng
    n /= 10;            // bỏ chữ số cuối cùng
    int last;
    while (n > 0)
    {
        last = n % 10;             // lấy chữ số cuối cùng
        n /= 10;                   // bỏ chữ số cuối cùng
        reNum = reNum * 10 + last; // vòng lặp để thực hiện bước 2 3 4
    }
    return reNum;
}

int main()
{
	
    int n;
    printf("INPUT NUMBER: ");
    scanf("%d", &n);
    printf("REVERSE NUMBER OF %d IS %d ", n, reverse(n));
    return 0;
}
