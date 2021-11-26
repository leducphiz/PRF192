/*bai 2 chuyen toan bo ki tu ve dang in thuong*/

#include<stdio.h>
#include<string.h>
int main(){
	char c[1000];
	gets(c);
	for(int i=0;i<strlen(c);i++){
		if(c[i]>='A'&&c[i]<='Z')
			c[i]+=32;
	}
	printf("%s",c);
}
