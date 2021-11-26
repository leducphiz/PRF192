#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	unsigned long long num, bin, dec = 0, base = 1, rem;
	scanf("%llu", &num);
  
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

	bin = num;
	while(num>0){
		rem = num % 10;
		dec = dec + rem * base;
		num = num /10;
		base = base * 2;
	}
	printf("%llu", dec);










  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
