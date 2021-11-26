#include<stdio.h>
int main(){
	int i,j,n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i+1;j++){
			printf("  ");
		}
		for(j=i;j<i*i;j++){
			printf("%d ", j%10);
		}
	}
}
