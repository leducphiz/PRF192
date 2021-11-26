/* bai 749A*/

#include<stdio.h>
int main (){
	int n;
	scanf("%d", &n);
	printf("%d\n", n/2);
	if(n%2==0){
	while(n){
		printf("2 ");
		n-=2;
	}
}
	else {
		while(n>3){
		printf("2 ");
		n-=2;
		}
		printf("3 ");
	}
	
}
