#include<stdio.h>

 

void NHAPN(int n) {

            int i;

            for(i=0; i<n; i++) {

                        printf("Nhap n[%d]: ",n);

                        scanf("%d",&n);

            }

}

 

void XuatMang(int n) {

            printf("tong la");

            int i;

            for(i=0; i<n; i++) {

                        printf("a[%d] = %d\n",i,a[i]);

            }

}

int main() {

            int n;

            do {

                        printf("Nhap n: ");

                        scanf("%d",&n);

            } while(n<5 || n=5);

            NhapMang( n);

            XuatMang( n);

}
