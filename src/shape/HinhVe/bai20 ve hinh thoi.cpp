/*bai 20 va 21 ve hinh chua hinh thoi */

#include<stdio.h>
int main(){
	int i,j,n;
	scanf("%d", &n);
	for(i=1;i<=2*n-1;i++){
		for(j=1;j<=2*n;j++){
			if(j-i >=n)
				printf("*");
			else printf("~");
		}
		printf("\n");
	}
}
