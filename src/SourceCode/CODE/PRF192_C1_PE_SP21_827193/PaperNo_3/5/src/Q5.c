#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
char chuanhoa(char c[]){
	int i;
	c[0]=toupper(c[0]);
	for( i=1;i<strlen(c);i++){
		c[i]=tolower(c[i]);
	}
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE: 
int i;
char c[1000];
	gets(c);
	char a[50][50];
	int n=0;
	char *token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL," ");
	}

  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

for( i=0;i<n;i++){
		chuanhoa(a[i]);
		printf("%s ",a[i]);
	}

	


  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
