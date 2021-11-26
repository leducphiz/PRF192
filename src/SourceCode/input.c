#include <stdio.h>
int main()
{
	int n;
	printf("1.Option 1\n");
	printf("2.Option 2\n");
	printf("3.Option 3\n");
	printf("0.Exit\n");
	do{
		printf("Your selection : ");
		scanf("%d",&n);
		if(n==0) return 0;
	}while( n != 1 && n!= 2 && n!=3);
	switch(n){
		case 1 :
			printf("Option 1");
			break;
		case 2 :
			printf("Option 2");
			break;
		case 3 : 
			printf("Option 3");
			break;
	}
	getch();
}
