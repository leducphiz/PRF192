/*bai 27 ve tam giac rong */
/* chua xong */
#include<stdio.h>
int main (){
	int i,j,n;
	int s=1;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=1;j<n-i;j++){
			printf("~");
		}
		for(j=1;j<=s;j++){
			if(s==n*2-1 || j==1 || j==n)
				printf("*");
			else printf(".");
		}
		if(s==n*2-1)
			break;
		s+=2;
		printf("\n");
	}
}
