/*bai 14 tao email 2*/

//INPUT
//ngUYEN van BInh 
//OUTPUT 
//nvbinh@gmail.com

#include<stdio.h>
#include<string.h>
#include<ctype.h>
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
	for(int i=0;i<n-1;i++){
		printf("%c",tolower(a[i][0]));
	}
	strlwr(a[n-1]);
	printf("%s@gmail.com",a[n-1]);
}
