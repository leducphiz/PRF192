#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

  int n , i, j;
     
 scanf("%d",&n);
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

 for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){         
            if(i==0 || i==n-1 || j==0 || j==n-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

	
	return 0;







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
