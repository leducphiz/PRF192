/* bai 41 nguyen tac E3 */

#include<stdio.h>
int main(){
	int i,j,n;
	scanf("%d", &n);
	for(i=1;i<=2*n-1;i+=2){
		for(j=i;j<=2*n-1;j+=2){
			printf("%d", j);
		}
		printf("\n");
	}
}
