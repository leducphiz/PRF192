/*bai 10 chen chuoi */

#include<stdio,h>
#include<string.h>
#include<ctype.h>

int main(){
	char a[100],b[100];
	gets(a);
	gets(b);
	int p;
	scanf("%d",&p);
	for(int i=0;i<p-1;i++){
		printf("%c",a[i]);
	}
	printf("%s",b);
	for(int i=p-1;i<strlen(a);i++){
		printf("%c",a[i]);
	}
}


//#include<stdio.h>
//#include<string.h>
//void copy(char a[]){
//	char a0[1000];
//	char b[1000];
//	gets(b);
//	int p;
//	scanf("%d",&p);
//	strcpy(a0,a+p-1);
//	strcpy(a+p-1,b);
//	strcat(a,a0);
//	puts(a);
//}
//
//int main(){
//	char a[1000];
//	gets(a);
//	copy(a);
//	return 0;
//}
