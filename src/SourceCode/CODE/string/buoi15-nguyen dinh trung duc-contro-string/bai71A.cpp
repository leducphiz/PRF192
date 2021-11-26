/*bai 71A*/

#include<stdio.h>
#include<string.h>
int main(){
	int T;
	scanf("%d",&T);
	int t=T+1;
	while(t--){
		char c[1000];
		gets(c);
		int len=strlen(c);
		if(len<=10){
			printf("%s\n",c);
		}
		else{
			printf("%c",c[0]);
			printf("%d",len-2);
			printf("%c\n",c[len-1]);
		}
	}
}
