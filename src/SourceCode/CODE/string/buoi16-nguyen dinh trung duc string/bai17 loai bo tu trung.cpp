/*bai 17 loai bo tu trung */

#include<stdio.h>
#include<string.h>
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
	printf("%s ",a[0]);
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(strcmp(a[j],a[i])==0){
				printf("%s ",a[i]);
			}
		}
	}
}
