
 #include<stdio.h>
 #include<math.h>
 

int dat(int n) 

   {
    
    if (n < 2) {
        return 0;
    }
   
    int i;
    int squareRoot = sqrt(n);
    for (i = 2; i <= squareRoot; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
 int n;
    printf("Nhap n = ");
    scanf("%d", &n);
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
