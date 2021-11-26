#include <stdio.h>

int clean_stdlin(){
	while(getchar() != '\n'){}
	return 1;
}

int main(){
	int n;
	char c;
	do{
		printf("Nhap n: "); 
	}while(((scanf("%d%c",&n,&c) != 2 || c!='\n') && clean_stdlin()) || (n<0 || n>10));
	int a[10];
	int i;
	for(i=0; i<n;i++){
		scanf("%d",&a[i]);
	}
	int sum=0;
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			sum=sum+a[i]*a[i];
		}
	}
	printf("\nOUTPUT: %d\n",sum);
	return 0;
}
