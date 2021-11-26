/* bai 2 file mod chia het cho 11
tong cac chu so hang le tru tong cac chu so hang chan chia het cho 11*/

#include<stdio.h>
#include<string.h>
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		char c[1001];
		scanf("%s",c);
		int sum1=0,sum2=0;
		for(int i=0;i<strlen(c);i++){
			if(i%2==0){
				sum1+=c[i]-'0';
			}
			else sum2+=c[i]-'0';
		}
		if((sum1-sum2)%11==0){
			printf("1\n");
		}
		else printf("0\n");
	}
}
