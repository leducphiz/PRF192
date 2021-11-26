/*bai 7 chuan hoa ten 2*/

//INPUT
//ngUYEN van binh 
//OUTPUT Nguyen Van, BINH

#include<stdio.h>
#include<string.h>
#include<ctype.h>
char chuanhoa(char c[]){
	c[0]=toupper(c[0]);
	for(int i=1;i<strlen(c);i++){
		c[i]=tolower(c[i]);
	}
}
int main(){
	char c[100];
	gets(c);
	int n=0;
	char a[50][50];
	char *token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL," ");
	}
	for(int i=0;i<n-1;i++){
		chuanhoa(a[i]);
		printf("%s",a[i]);
		if(i==n-2){
			printf(", ");
		}
		else printf(" ");
	}
	strupr(a[n-1]);
	printf("%s",a[n-1]);
}
