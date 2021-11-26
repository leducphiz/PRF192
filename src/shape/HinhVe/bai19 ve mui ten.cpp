/*bai 19 ve mui ten sang trai */
#include<stdio.h>
int main(){
	int i,j,n;
	scanf("%d", &n);
	for(i=1;i<=2*n-1;i++){
		int count;
		if(i<=n) count=n-i;
		else count=i-n;
		for(j=1;j<=count;j++){
			printf("~");
		}
		int count1;
		if(i<=n) count1=n-i+1;
		else count1=i-n+1;
		for(j=1;j<=count1;j++){
			printf("*");
		}
		printf("\n");
	}
}

