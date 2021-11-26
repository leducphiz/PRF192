/*bai 19 dem so lan xuat hien cua cac tu trong chuoi */

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char c[100];
	gets(c);
	strlwr(c);
	int n=0;
	char a[50][50];
	char *token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL," ");
	}
	int b[100]={0};
	for(int i=0;i<n;i++){
		int dem=1;
		if(b[i]==0){
			for(int j=i+1;j<n;j++){
				if(strcmp(a[i],a[j])==0){
					dem++;
					b[j]=1;
				}
			}
		printf("%s %d\n",a[i],dem);
		}
	}
}
