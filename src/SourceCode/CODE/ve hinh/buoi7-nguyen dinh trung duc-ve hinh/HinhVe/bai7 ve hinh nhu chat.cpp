/* bai 7 ve hinh chu nhat cac so 1, 0 */

#include<stdio.h>
int main (){
	int i,j,n,m;
	scanf("%d%d", &n, &m);
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(i%2==0){
			printf("0");
		}
			else printf("1");
		}
		printf("\n");
	}
}
