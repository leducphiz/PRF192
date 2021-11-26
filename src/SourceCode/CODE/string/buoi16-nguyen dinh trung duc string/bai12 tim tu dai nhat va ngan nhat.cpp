/*bai 12 tim tu dai nhat va ngan nhat trong chuoi */

#include<stdio.h>
#include<string.h>

int main(){
	char c[100];
	gets(c);
	int n=0;
	char a[50][50],b[100],a1[100];
	char *token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL," ");
	}
	int max=-1e9;
	int min=1e9;
	for(int i=0;i<n;i++){
		int so1=strlen(a[i]);
		int so2=strlen(a[i]);
		if(so1>max){
			max=so1;
			strcpy(b,a[i]);
		}
		if(so2<min){
			min=so2;
			strcpy(a1,a[i]);
		}
	}
	printf("%s %s",b,a1);
}
