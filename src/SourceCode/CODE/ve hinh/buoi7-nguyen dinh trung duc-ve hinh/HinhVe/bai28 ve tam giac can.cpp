/* bai 28 ve tam giac can */

#include<stdio.h>
int main(){
	int i,j,n;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=1;j<=2*n-1;j++){
			if(i+j<=n) printf("~");
			if(i+j>=n&&i-j>1-n||i==n) printf("*");
		}
		printf("\n");
	}
}
