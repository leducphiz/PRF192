/*bai 2 ve hinh chu nhat cac so 1 */

#include<stdio.h>
int main(){
	int i,j,n,m;
	scanf("%d %d", &n, &m);
	for(i=1;i<=n;i++){
		for(j=1; j<=m; j++){
			printf("*");
		}
		printf("\n"); 
	}
}
