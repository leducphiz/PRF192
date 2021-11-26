/* bai 29 ve tam giac vuong nguoc */

#include<stdio.h>
int main (){
	int i,j,n;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=n-i+1;j>0;j--){
			printf("*");
		}
		printf("\n");
	}
}
