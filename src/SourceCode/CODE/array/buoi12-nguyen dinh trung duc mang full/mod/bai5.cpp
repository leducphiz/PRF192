/*bai5 */
#include<stdio.h>

int powmod(int a,int b,int c){
	long long res=1;
	for(int i=1;i<=b;i++){
		res*=a;
		res%=c;
	}
	return res%=c;
}

int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d",powmod(a,b,c));
}
