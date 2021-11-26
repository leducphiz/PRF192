/* bai 14 ve mui ten sang phai */

#include<stdio.h>
int main(){
	int i,j,n;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		for(j=0;j<=2*i-1;j++){
			printf("~");
		}
		for(j=n-i;j>=1;j--){
			printf("*");
		}
		printf("\n");
	}
	
	for(i=1; i<=n-1; i++){
		for(j=(n-i)*2-3;j>=0;j--){
			printf("~");
		}
		for(j=1;j<=i+1;j++){
			printf("*");
		}
		printf("\n");
	}
}
