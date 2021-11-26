/*bai 9 kiem tra ki tu nhap vao co phai chu cai hoac chu so khong */

#include<stdio.h>
int main(){
	char c;
	scanf("%c",&c);
	if(c>='A'&&c<='Z' || c>='0'&&c<='9' ||c>='a'&&c<='z' ) printf("1");
	else printf("0");
}
