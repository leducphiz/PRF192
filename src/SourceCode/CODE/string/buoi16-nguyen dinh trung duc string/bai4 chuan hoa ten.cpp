/*bai 4 chuan hoa ten */

//INPUT ngUYEN van nam 
//OUTPUT Van Nam, NGUYEN

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
	char c[1000];
	gets(c);
	int n=0;
	char a[50][50];
	char *token=strtok(c," ");
	while (token!=NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL," ");
	}
	for(int i=1;i<n;i++){
		chuanhoa(a[i]);
		printf("%s",a[i]);
		if(i==n-1){
			printf(", ");
		}
		else printf(" ");
	}
	strupr(a[0]);
	printf("%s",a[0]);
}
