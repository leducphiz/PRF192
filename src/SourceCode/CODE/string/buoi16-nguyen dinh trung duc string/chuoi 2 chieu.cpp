/*chuoi 2 chieu */

//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//
//void chuanhoa(char c[]){
//	c[0]=toupper(c[0]);
//	for(int i=1;i<strlen(c);i++){
//		c[i]=tolower(c[i]);
//	}
//}
//int main(){
//	char c[1000];
//	gets(c);
//	char a[50][50];
//	int n=0;
//	char *token=strtok(c," ");
//	while(token!=NULL){
//		strcpy(a[n],token);
//		n++;
//		token=strtok(NULL," ");
//	}
//	for(int i=1;i<n;i++){
//		chuanhoa(a[i]);
//		printf("%s",a[i]);
//		if(i==n-1){
//			printf(", ");
//		}
//		else printf(" ");
//	}
//	strupr(a[0]);
//	printf("%s",a[0]);
//	return 0;
//}

/*chuan hoa email*/
// nguyen van binh => binh @gmail.com
//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//int main(){
//	char c[1000];
//	gets(c);
//	char a[50][50];
//	int n=0;
//	char *token=strtok(c," ");
//	while(token!=NULL){
//		strcpy(a[n],token);
//		n++;
//		token=strtok(NULL," ");
//	}
//	printf("%s",a[n-1]);
//	for(int i=0;i<n-1;i++){
//		printf("%c",tolower(a[i][0]));
//	}
//	printf("@gmail.com");
//}

/*liet ke tu in hoa */

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int checkuppercase(char c[]){
	for(int i=0;i<strlen(c);i++){
		if(islower(c[i])){
			return 0;
		}
	}
	return 1;
}
int main(){
	char c[100];
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
		if(checkuppercase(a[i])){
			printf("%s  ",a[i]);
		}
	}
}
