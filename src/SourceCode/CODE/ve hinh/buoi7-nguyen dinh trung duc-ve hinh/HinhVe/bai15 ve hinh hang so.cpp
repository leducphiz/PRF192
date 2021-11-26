/* bai 15 ve hinh hang so */

#include<stdio.h>
int main(){
	int i,j,n;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=n;j>=n-i+1;j--){
			printf("%d", j);
		}
		for(j=n-i;j>0;j--){
			printf("%d", n-i+1);
		}
		printf("\n");
	}
}
