/*bai 21 loai bo tu trung */
#include<stdio.h>
#include<string.h>

int main(){
	char c[1000],c1[100];
	gets(c);
	gets(c1);
	int n=0;
	char a[50][50];
	char *token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL," ");
	}
	for(int i=0;i<n;i++){
		if(strcmp(c1,a[i])!=0){
			printf("%s ",a[i]);
		}
	}
}

