
#include <stdio.h>
 int main()
 {
 int x ,y ;
 printf( "Nhap hai so nguyen : ");
 scanf("%d%d", &x,&y);
 if( x > y)
 {
 	printf ("y");
 /*
 	printf ( "min %d",y);
 	*/
 } 
 else 
 {
    
    printf ("y");
 	/* 
	 printf("min %d ", x);
	 */
 }
return 0;
 }


/*
 #include <stdio.h>
 int main()
 {
 int a,b,c ;
 printf( "Nhap so nguyen : ");
 scanf("%d", &a);
 printf( "Nhap so nguyen : ");
 scanf("%d", &b);
 printf( "Nhap so nguyen : ");
 scanf("%d", &c);
 int min;
 min= a<b<c ? a:b:c ;
 printf ("min=%d",min);
 int max;
 max=a>b>c?a:b:c;
 printf ("max=%d", max);
}
 /*#include <stdio.h>
 int main ()
 { float a,b,c;
 printf("nhap a="); scanf("%f", &a);
  printf("nhap b="); scanf("%f",&b);
   printf("nhap c="); scanf("%f",&c);
switch (a,b,c)
	{
	case a<b<c : printf(" thu %d",a); break;
 	 	case b<a<c: printf(" thu %d",b); break;
 	 	 	case c<a<b: printf(" thu %d",c); break;
default
    printf("gg");
 	 
}
 }*/


