/*bai 5 chuyen thuong thanh hoa*/

#include<stdio.h>
int main(){
	char c;
	scanf("%c",&c);
	if(c>='a'&&c<='z')
		c-=32;
	printf("%c",c);
}
