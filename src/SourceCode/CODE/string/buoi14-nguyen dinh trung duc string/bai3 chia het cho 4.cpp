/*bai 3 dau hieu chia het cho 4 */

#include<stdio.h>
#include<string.h>
#include<math.h>

int min(int a, int b){
	if(a>=b){
		return b;
	}
	return a;
}

int divideby4(char c[]){
	int len=strlen(c);
	int res=0;
	for(int i=0;i<min(2,len);i++){
		res=((c[len-i-1]-'0')*pow(10,i))+res;
	}
	if(res%4==0) return 1;
	else return 0; 
}
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		char c[1001];
		scanf("%s",c);
		if(divideby4(c)){
			printf("1\n");
		}
		else printf("0\n");
//		int res=0;
//		int so=min(strlen(c),2);
//		for(int i=0;i<so;i++){
//			res=res*10+(c[strlen(c)-so+i]-'0');
//		}
//		if(res%4==0) printf("1\n");
//		else printf("0\n");
	}
}
