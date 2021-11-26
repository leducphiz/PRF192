/*bai 4 chia het cho 25, 2 chu so tan cung chia het cho 25 */

#include<stdio.h>
#include<string.h>
#include<math.h>
int min(int a,int b){
	if(a<b){
		return a;
	}
	return b;
}
int divideby25(char c[]){
	int len=strlen(c);
	int res=0;
	for(int i=0;i<min(len,2);i++){
		res=((c[len-i-1]-'0')*pow(10,i))+res;
	}
	if(res%25==0) return 1;
	return 0;
}
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		char c[1001];
		scanf("%s",c);
//		int res;
//		int so=min(2,strlen(c));
//		for(int i=0;i<so;i++){
//			res=res*10+(c[strlen(c)-so+i]-'0');
//		}
//		if(res%25==0){
		if(divideby25(c)){
			printf("1\n");
		}
		else printf("0\n");
	}
}
