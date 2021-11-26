#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int a[100];
  int b[100];
  int n,i, j;
  scanf("%d", &n);
  
  for(i =0; i <n;i++){
  	scanf("%d", &a[i]);
  	b[i]=0;
  }
  
	for(i = 0; i < n; i++){
		for(j=i; j < n; j++){
			if(a[j] == a[i] && (a[j] % 2 ==0)){
				b[i]++;
			}
		}
	}
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(i = 0; i < n; i++){
  	if(b[i] >= 2){
  		printf("%d\n", a[i]);
	  }
  }








  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
