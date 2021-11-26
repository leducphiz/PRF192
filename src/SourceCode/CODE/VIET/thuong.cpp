#include <stdio.h>
 int main()
 {
 int x ,y ;
 printf( "Nhap hai so nguyen : ");
 scanf("%d%d", &x,&y);

 if( y == 0)
 {
 	printf ( "khong thuc hien duoc.");
 } 
 else 
 {
 	float div= (float)x / y;
 	printf("%d / %d = %f\n ", x, y, div);
 }
return 0;
 }
