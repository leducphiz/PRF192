/* bai 19 ve mui ten sang trai */

#include<stdio.h>
int main(){
	int i,j,n;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=n-i;j>0;j--){
			printf("~");
		}
		for(j=n-i+1;j>0;j--){
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<n;i++){
		for(j=1;j<=i;j++){
			printf("~");
		}
		for(j=1;j<=i+1;j++){
			printf("*");
		}
		printf("\n");
	}
}
