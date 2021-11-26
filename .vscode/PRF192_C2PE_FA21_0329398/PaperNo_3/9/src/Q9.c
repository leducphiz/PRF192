#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  int n,i,flag = 0;
  scanf("%d", &n);
  for(i=2; i < n/2;++i){
  	if(n % i == 0){
  		flag = 1;
  		break;
	  }
  }
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
	if( n==1 ){
		printf("1 is neither prime nor composite");
	}else{
		if(flag == 0){
			printf("0x%X", n);
		}else{
			printf("%d is not prime number", n);
		}
	}






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
