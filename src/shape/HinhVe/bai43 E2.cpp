/*bai 43 va 44 giong nhau */

#include<stdio.h>
int main(){
	int i,j,n;
	scanf("%d", &n);
	for(i=n;i>=1;i--){
		for(j=i;j<=2*i-1;j++){
			printf("%d", j);
		}
		printf("\n");
	}
}
