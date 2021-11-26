/*bai 8 chuan hoa ten 3*/

//INPUT
//ngUYEN van binh 
//OUTPUT
//BINH, Nguyen Van

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
	char a[50][50];
	int n=0;
	char *token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL," ");
	}
	strupr(a[n-1]);
	printf("%s, ",a[n-1]);
	for(int i=0;i<n-1;i++){
		chuanhoa(a[i]);
		if(i==n-2){
			printf("%s",a[i]);
		}
		else printf("%s ",a[i]);
	}
}
