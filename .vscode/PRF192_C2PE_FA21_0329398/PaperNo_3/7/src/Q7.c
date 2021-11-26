#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
void sort(char* s){
	int i,j;
	char temp;
	int min;
	for(i=0; s[i] != '\0';i++){
		min = i;
		for(j=i+1; s[j] != '\0';j++){
			if(s[min]> s[j]){
				min = j;
			}
		}
		temp = s[i];
		s[i] = s[min];
		s[min] = temp;
	}
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  char s[101];
  scanf("%s", &s);
  
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  sort(s);
  printf("%s", s);







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
