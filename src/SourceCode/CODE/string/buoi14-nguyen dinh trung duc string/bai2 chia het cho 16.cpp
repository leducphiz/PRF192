/*bai 2 dau hieu chia het cho 16*/

#include<stdio.h>
#include<string.h>
#include<math.h>
int min(int a,int b){
	if(a>=b) return b;
	return a;
}

int divideby16(char c[]){
	int len=strlen(c);
	int res=0;
	for(int i=0;i<min(4,len);i++){
		res=((c[len-i-1]-'0')*pow(10,i))+res;
	}
	if(res%16==0) return 1;
	return 0;
}

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		char c[1001];
		scanf("%s",c);
		if(divideby16(c)) printf("1\n");
		else printf("0\n");
	}
}
//#include<stdio.h>
//#include<string.h>
//int min(int a, int b){
//	if(a>=b){
//		return b;
//	}
//	return a;
//}
//int main(){
//	int T;
//	scanf("%d",&T);
//	while(T--){
//		char c[1001];
//		scanf("%s",c);
//		int res=0;
//		int so=min(strlen(c),4);
//		for(int i=0;i<so;i++){
//			res=res*10+(c[strlen(c)-so+i]-'0');
//		}
//		if(res%16==0){
//			printf("1\n");
//		}
//		else printf("0\n");
//	}
//}
