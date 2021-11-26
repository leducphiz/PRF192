#include <stdio.h>
 int main()
 {
 int a  ;
 printf( "Nhap so nguyen : ");
 scanf("%d", &a);

 switch (a)
 {
 	case 2: printf(" thu %d",a); break;
 	 	case 3: printf(" thu %d",a); break;
 	 	 	case 4: printf(" thu %d",a); break;
 	 	 	 	case 5: printf(" thu %d",a); break;
 	 	 	 	 	case 6: printf(" thu %d",a); break;
 	 	 	 	 	 	case 7: printf(" thu %d",a); break;
 	 	 	 	 	 	 	case 8: printf(" cn",a); break;
default:
	printf("khong phai nay trong tuan");
 }
}
