#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n;

scanf("%d",&n);
char a[n];
fflush(stdin);
gets(a);
n=strlen(a);

  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int t=0;
for(int i=0;i<n/2;i++)
 if (a[i]==a[n-i-1]) t++;
 if (t==n/2)
 	printf("1");
 else 
 	printf("0");







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
