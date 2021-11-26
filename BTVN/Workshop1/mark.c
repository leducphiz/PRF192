
#include<stdio.h>

int main(){ 
    float n;
    printf("Input Your Mark:");
    scanf("%f", &n);

    if (n >= 9 && n <= 10){
        printf("Welcome to Vin University!");
    }else if(n >= 8 && n <= 10){
    	printf("Welcome to FPT University!");
	}else if(n >= 7 && n <= 10){
		printf("Welcome to Phenika University!");
	}else if(n >= 5 && n <= 10 ){
		printf("Welcome to Industry University!");
	}else{
		printf("You Fail!");
	}
	getch();
}
