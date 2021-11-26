#include<stdio.h>
#include <stdbool.h>

int main(){
	int a;
	
	
	do{
		printf("input:");
		scanf("%d", &a);
	}while((a == 'y')&&(a == 'n'));
	
	printf("ok" );
}
