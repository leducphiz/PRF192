/*bai1111A*/

#include<stdio.h>
#include<string.h>
int check(char c){
	if(c=='a' || c== 'i' || c=='u' || c=='e' || c=='o') return 0;
	return 1;
}
int main(){
	char c1[1001],c2[1001];
	gets(c1);
	gets(c2);
	int len1=strlen(c1), len2=strlen(c2);
	if(len1!=len2){
		printf("No");
		return 0;
	}
	for(int i=0;i<len1;i++){
		if(check(c1[i])+check(c2[i])==1){
			printf("No");
			return 0;
		}
	}
	printf("Yes");
}

