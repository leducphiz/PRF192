#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int arr[5];
  int i;
  for(i=0; i < 5; i++){
  	scanf("%d", &arr[i]);
  }
  
  
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
	for(i=0; i < 5; i++){
  	if((arr[i] % 4 == 0) && (arr[i] % 100 != 0) || (arr[i] % 400 == 0)){
  		printf("%d ", arr[i]);
	  }
  }






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
