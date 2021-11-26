#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void sx(int a[], intn){
	int i, j;
	for(i = 0; i < n; i++){
		for(j = i+1; j < n;j++){
			while(a[i]%2==0 && a[j]%2==0){
				if (a[i] > a[j]){
					int t = a[i];
					a[i] = a[j];
					a[j] = t;
				}
			}
			while(a[i]%2!=0 && a[j]%2!=0){
				if (a[i] > a[j]){
					int t = a[i];
					a[i] = a[j];
					a[j] = t;
				}
			}
		}
	}
}


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int a[100];
  scanf("%d", &n);
  int i;
  for(i = 0; i < n; i++){
  	scanf("%d", &a[i]);
  }
  
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
