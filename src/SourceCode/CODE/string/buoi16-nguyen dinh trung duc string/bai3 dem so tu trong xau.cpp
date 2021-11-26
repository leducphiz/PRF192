/*bai 3dem so tu trong xau */
#include<stdio.h>
#include<string.h>

int main(){
	char c[1000];
	gets(c);
	char a[50][50];
	int len=strlen(c);
	int n=0;
	char *token=strtok(c," ");
	while (token!=NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL," ");
	}
	printf("%d", n);
}
