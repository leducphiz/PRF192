/*bai 31 ve hinh chu nhat */

#include<stdio.h>
int main(){
	int i,j,n;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if((i+j)%2==0) printf("1");
			else printf("0");
		}
		printf("\n");
	}
}
