#include <stdio.h>
int main()
{
     char ch;
     printf(" Enter Character : ");
     scanf("%c",&ch);
     printf("----------------------\n  ");
     if(ch=='r' || ch=='R')
     {
          printf("RED");
     }
     else if(ch=='g' || ch=='G')
     {
          printf("GREEN");
     }
     else if(ch=='b' || ch=='B')
     {
          printf("BLUE");
     }
     else
     {
          printf("Invalid Input");
     }
     return 0;
}
