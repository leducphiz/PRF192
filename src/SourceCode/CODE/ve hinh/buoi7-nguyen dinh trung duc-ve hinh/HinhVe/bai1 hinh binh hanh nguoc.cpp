/*bai 1 ve hinh binh hanh nguoc */

#include<stdio.h>
int main(){
	int i,j,n,m;
	scanf("%d %d", &n, &m);
	for(i=1;i<=n;i++){
		for(j=1;j<i;j++){
			printf("~");
		}
		for(j=1;j<=n;j++){
			if(i==1 || i==n|| j==1 || j==n){
			printf("*");
			}
		else printf(".");
		}
		printf("\n");
	}
}
