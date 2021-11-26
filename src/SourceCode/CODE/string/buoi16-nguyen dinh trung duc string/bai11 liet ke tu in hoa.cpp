/*bai 11 liet ke tu in hoa */

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int checkuppercase(char c[]){
	for(int i=0;i<strlen(c);i++){
		if(islower(c[i])) return 0;
	}
	return 1;
}
int main(){
	char c[1000];
	gets(c);
	int n=0;
	char a[50][50];
	char *token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL," ");
	}
	for(int i=0;i<n;i++){
		if(checkuppercase(a[i])) printf("%s ",a[i]);
	}
}
