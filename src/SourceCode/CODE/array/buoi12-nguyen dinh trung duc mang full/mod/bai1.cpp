/* bai 1*/

#include<stdio.h>
#include<math.h>
int binToDec(long long n){
	int p=0;
	int dec=0;
	while(n>0){
		dec+=(n%10)*pow(2,p);
		p++;
		n/=10;
	}
	return dec;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(binToDec(n)%5==0){
			printf("Yes\n");
		}
		else printf("No\n");
	}
}
