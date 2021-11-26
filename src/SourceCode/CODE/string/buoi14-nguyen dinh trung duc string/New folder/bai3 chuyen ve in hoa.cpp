/*bai 3 chuyen toan bo ki tu ve dang in hoa*/

#include<stdio.h>
#include<string.h>
int main(){
	char c[1000];
	gets(c);
	for(int i=0;i<strlen(c);i++){
		if(c[i]>='a'&&c[i]<='z')
			c[i]-=32;
	}
	printf("%s",c);
}
