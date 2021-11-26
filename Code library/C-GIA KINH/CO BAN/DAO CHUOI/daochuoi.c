#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void daochuoi(char *s ){
	s[str(s)-3]=strrev(s[str(s)-3]);
	s[str(s)-2]=strrev(s[str(s)-2]);
	s[str(s)-1]=strrev(s[str(s)-1]);
//	puts(s); // giong voi printf
}
int main () {
	system("cls");
	char s[100];
	
	printf("Nhap s: "); gets(s);
	printf("\nOUTPUT:\n");
	
	daochuoi(s);
	
	printf("%s",s);
	printf("\n");
	system("pause");
	return 0;
}
