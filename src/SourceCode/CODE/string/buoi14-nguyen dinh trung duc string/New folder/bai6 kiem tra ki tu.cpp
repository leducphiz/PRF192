/*bai 6 kiem tra ki tu nhap vao co phai chu cai khong */

#include<stdio.h>
int main(){
	char c;
	scanf("%c",&c);
	if(c>='A'&&c<='Z' || c>='a'&&c<='z') printf("1");
	else printf("0");
}
