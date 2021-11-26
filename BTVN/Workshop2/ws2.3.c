#include<stdio.h>

int main(){
	int firstIncome;
	int tax;
	do{
        printf("\nIncome for the current month (in thousand VND):");
        scanf("%lld", &firstIncome);
        if (firstIncome<0)
        {
         	printf("\nInvalid input, try again!");
        }               
     } while (firstIncome < 0);  
	
	if(firstIncome <= 10000) {
		tax = firstIncome * 0;
	}else if (firstIncome > 10000 && firstIncome <= 15000) {
		tax = (firstIncome  - 10000)*0.05;
	}else if(firstIncome > 15000 && firstIncome <= 25000) {
		tax = 5000 * 0.05 + (firstIncome - 15000)*0.1;
	} else if(firstIncome > 25000 && firstIncome <= 40000) {
		tax = 5000 * 0.05 + 10000 * 0.1 + (firstIncome - 25000)*0.2; 
	}else if(firstIncome > 40000) {
		tax = 5000 * 0.05 + 10000 * 0.1 + 25000 * 0.2 + (firstIncome - 40000)*0.3;
	}
	printf("\nTax = %d VND", tax);
	getch();
	return 0;
	
}
