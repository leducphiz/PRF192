/*bai 18*/

#include<stdio.h>
int main(){
	int i,j,n;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf("~");
		}
		for(j=1;j<=i;j++){
			if(j==1||i==n|| j==i)
			{
				printf("*");
			}
			else printf(".");
		}
		printf("\n");
	}
}
