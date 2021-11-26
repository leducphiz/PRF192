/*bai 2 chuyen chu hoa thanh chu thuong va nguoc lai */

#include<stdio.h>
#include<string.h>
int main(){
	char c[1000];
	gets(c);
	for(int i=0;i<strlen(c);i++){
		if(c[i]>='A' && c[i]<='Z'){
			c[i]+=32;
		}
		else if(c[i]>='a' && c[i]<='z'){
			c[i]-=32;
		}
	}
	printf("%s",c);
}
