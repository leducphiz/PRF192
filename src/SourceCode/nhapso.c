#include<stdio.h>

int main(){
	long long int n;
	printf("nhap so co 10 chu so:");
	do{
		scanf("%lld", &n);
		if(n < 9999999999){
			printf("try again");
		}
	}while(n > 0 && n <= 9999999999);
	
}
