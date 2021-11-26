#include <stdio.h>

int main() {

     int a, b, c, t;
     printf("Nhap vao so a: ");
     scanf("%d", &a);

     printf("Nhap vao so b: ");
     scanf("%d", &b);

     printf("Nhap vao so c: ");
     scanf("%d", &c);

     if(a>b)

     {
      t=a;
      a=b;
      b=t;
     }

    if(b>c)

     {
     t=b;
     b=c;
     c=t;
     }
     if(a>b)

     {
      t=a;
      a=b;
      b=t;
     }
     

    

    printf("Day so duoc sap xep theo thu tu tang dan la: %d %d %d", a, b, c);

}
