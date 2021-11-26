/*bai 1 dau hieu chia het cho 6*/

#include<stdio.h>
#include<string.h>

int divideby6(char c[]){
	int len=strlen(c);
	if(c[len-1]%2!=0) 
		return 0;
	int sum=0;
	for(int i=0;i<len;i++){
		sum+=c[i]-'0';
	}
	if(sum%3==0) return 1;
	return 0;
}

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		char c[1000];
		scanf("%s",c);
		if(divideby6(c)){
			printf("1\n");
		}
		else printf("0\n");
	}
}

//#include<stdio.h>
//#include<string.h>
//int main(){
//	int T;
//	scanf("%d",&T);
//	while(T--){
//	char c[1001];
//	scanf("%s",c);
//	int sum=0;
//	for(int i=0;i<strlen(c);i++){
//		sum+=c[i]-'0';
//	}
//	if(sum%3==0){
//		if((c[strlen(c)-1] - '0')%2==0){
//			printf("1\n");
//		}
//	}
//	else printf("0\n");
//	}
//}
