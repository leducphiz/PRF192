#include <stdio.h>

int main(){
	int n, i, j;
	scanf("%d", &n);
	
	
	//In ra hing vuong dac
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("* ");
		}
		printf("\n");
	}

	printf("\n\n");
	//In ra hinh vuong rong
//	for(i = 1; i <= n; i++)	printf("* ");
	printf("\n");
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(i== 0|| j == 0 || j == n - 1 || i == n - 1){
				printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
//	for(i = 1; i <= n; i++)	printf("* ");
}
