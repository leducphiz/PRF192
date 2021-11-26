#include<stdio.h>
int main ()

{
    int n;
    printf("Nhap kich thuoc tam giac: "); 
    scanf("%d",&n);
	int i,j;
	 for(i = 1; i <= n; i++) {
      for(j = 1; j < i; j++)
         printf(" "); 
 
      for(j = i; j <= n; j++)
         printf("an");
 
      printf("\n");
   }
}
