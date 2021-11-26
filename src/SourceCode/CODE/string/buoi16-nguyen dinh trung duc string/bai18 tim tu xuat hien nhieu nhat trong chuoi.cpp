/*bai 18 tim tu xuat hien nhieu nhat trong chuoi */

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
	char res[100];
	int max=0;
	for(int i=0;i<n;i++){
		int dem=0;
		for(int j=0;j<n;j++){
			if(strcmp(a[i],a[j])==0){
				dem++;
			}
			if(dem>max){
				max=dem;
				strcpy(res,a[i]);
			}
		}
	}
	printf("%s %d",res,max);
}
