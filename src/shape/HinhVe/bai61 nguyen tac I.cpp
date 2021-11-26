/* bai 61 nguyen tac I */
//1
//23
//456
//78910
#include<stdio.h>
int main(){
	int i,j,n;
	int count=0;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			count+=1;
			printf("%d", count);
		}
		printf("\n");
	}
}
