/* bai 4 viet ham chuyen 1 ki tu tu hoa thanh thuong */

#include<stdio.h>
int main(){
	char c;
	scanf("%c",&c);
	if(c>='A'&&c<='Z')
		c+=32;
	printf("%c",c);
}
