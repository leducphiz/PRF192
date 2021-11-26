/* bai 281A*/

#include<stdio.h>
#include<string.h>
int main(){
	char c[1000];
	gets(c);
	if(c[0]>='a'&&c[0]<='z'){
			c[0]-=32;
		}
	printf("%s",c);
}
