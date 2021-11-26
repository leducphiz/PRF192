/*bai 5 tao dia chi email */
//INPUT ngUYEN van binh 
//OUTPUT binhnv@gmail.com

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char c[100];
	gets(c);
	char a[50][50];
	int n=0;
	char *token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL, " ");
	}
	printf("%s",strlwr(a[n-1]));
	for(int i=0;i<n-1;i++){
		printf("%c", tolower(a[i][0]));
	}
	printf("@gmail.com");
}
