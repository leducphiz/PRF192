/*bai 6 chia het cho ca 2,3,5*/

#include<stdio.h>
#include<string.h>
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		char c[1001];
		scanf("%s",c);
		int sum=0;
		for(int i=0;i<strlen(c);i++){
			sum+=c[i]-'0';
		}
		if((c[strlen(c)-1]-'0')==0 && sum%3==0){
			printf("1\n");
		}
		else printf("0\n");
	}
}
