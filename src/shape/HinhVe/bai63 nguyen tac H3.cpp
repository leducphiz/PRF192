/* bai 63 nguyen tac H3 */

//INPUT
//5
//OUTPUT
//~~~~2
//~~~242
//~~24642 
//~2468642 
//2468108642

#include<stdio.h>
int main(){
	int i,j,n;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=n-i+1;j>=0;j--){
			printf("~");
		}
		for(j=2;j<=2*i;j+=2){
			printf("%d", j);
		}
		for(j=2*i-2;j>=2;j-=2){
			printf("%d", j);
		}
		printf("\n");
	}
}
