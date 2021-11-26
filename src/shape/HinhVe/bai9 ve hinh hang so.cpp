/*bai 9 ve hinh hang so */

#include<stdio.h>
int main (){
	int i,j,n;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		for(j=i*n+1;j<=i*n+n;j++){
			printf("%d ", j);
		}
		printf("\n");
	}
}
