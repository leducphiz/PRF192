#include<stdio.h>
#include<math.h>
#include<conio.h>
 

int dat(int c) 

   {
    
    if (c < 2) {
        return 0;
    }
   
    int i;
    int squareRoot = sqrt(c);
    for (i = 2; i <= squareRoot; i++) {
        if (c % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
 int n;
 int c;
 int sotachra;
 int s;
    printf("Nhap n = ");
    scanf("%d", &n);
     for(;n!=0;){
        c = n % 10;
        s = c;
        n /= 10;
    }    
    printf("%d so nguyen to dau tien la: \n", n);
    int dem = 0; // dem tong so nguyen to
    int i = 2;   // tim so nguyen to bat dau tu so 2
    while (dem < n) {
        if (dat(i)) {
            printf("%d ", i);
            dem++;
        }
        i++;
    }
}


