#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main() {  // Do not edit this function

  char str[100],s[100];
  printf("s= "); gets(str);
  char *str1; 
  str1=str;
  int count=0;
  int i, k;
  while(1)
  {str1=strstr(str1,"ou"); 
  if(str1==NULL) break;k=0;
  for (i=3; i<=strlen(str1)-1;i++)
   { s[k]=str1[i];k++;}
   s[k]='\0';
    str1=s;
   count++;
  }
  printf("%d",count);
  system ("pause");
  return(0);
}

