#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	printf("*******ISBN Validator**********\n");
	while(1){
		int i, sum = 0 , sum1 = 0;
		int a[10];
		char c[10];
		int b[9] = {10,9,8,7,6,5,4,3,2};
		printf("ISBN (0 to quit): ");
		scanf("%[^\n]",&c);
		fflush(stdin);
		if((c[0]) == 48 && strlen(c)==1)
		{
			printf("\nHave a Nice Day!");
			break;
			}
		else
		{
			
			for(i=0;i<10;i++){
				a[i]=(int)c[i]-48;
			}
			
			
			for( i = 0 ; i <=8 ; i++ ){
				sum += a[i] * b[i] ;
				sum += a[9];
			}
			
			if(sum % 10 == 0){
				printf("This is a valid ISBN.\n");
			}
			else{
				printf("This is not a valid ISBN.\n");
			}
			
			getch();
	
		}
}

getch();

}
