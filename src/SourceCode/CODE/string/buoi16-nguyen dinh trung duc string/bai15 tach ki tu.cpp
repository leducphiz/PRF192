/*bai 15 tach ki tu*/

#include<stdio.h>
#include<string.h>
int main(){
	char c[100];
	gets(c);
	strlwr(c);
	for(int i=0;i<strlen(c);i++){
		if(c[i]==' ') continue;
		printf("%c ",c[i]);
	}
}
