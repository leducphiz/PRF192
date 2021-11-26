#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n,i;
    scanf("%d", &n);
    
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:


 if(n < 2){
        printf("\n%d is not a prime number", n);
        return 0;
    }
    int T = 0;
    for(i = 2; i <= sqrt(n); i++){
        if(T=n % i == 0){
            T++;
        }
    }
    if(T == 0){
        printf("\n%d is a prime number", n);
    }
	else
	{
        printf("\n%d is not a prime number", n);
    }




  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
