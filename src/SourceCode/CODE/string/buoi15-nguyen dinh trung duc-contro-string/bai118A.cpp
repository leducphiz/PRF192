/*bai 118A*/

#include<stdio.h>
#include<string.h>
int isvowel(char c){
	if(c=='u' || c=='e' || c=='o' || c=='a' || c=='i' || c=='y'){
		return 1;
	}
	return 0;
}
int main(){
	char c[100];
	scanf("%s",c);
	strlwr(c);
	for(int i=0;i<strlen(c);i++){
		if(isvowel(c[i])==0) printf(".%c",c[i]);
	}
}
//#include<stdio.h>
//#include<string.h>
//int main(){
//	char c[1000],c1[1000];
//	gets(c);
//	for(int i=0;i<strlen(c);i++){
//		if(c[i]>='A'&&c[i]<='Z'){
//			c[i]+=32;
//		}
//	}
//	int cnt=0;
//	for(int i=0;i<strlen(c);i++){
//		if(c[i]!='U' && c[i]!='u' &&c[i]!='a' &&c[i]!='A' &&c[i]!='E' &&c[i]!='e' &&c[i]!='O' &&c[i]!='o' &&c[i]!='I' &&c[i]!='i'&&c[i]!='Y' &&c[i]!='y'){
//			c1[cnt++]=c[i];
//		}
//	}
//	for(int i=0;i<cnt;i++){
//		printf(".%c",c1[i]);
//	}
//}
