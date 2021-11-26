#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
  system("cls");
  // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

  char arr[4];
  int i, j;
  for (i = 1; i <= 4; i++)
  {
    scanf("%s", &arr[i]);
  }

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (i = 1; i <= 4; i++)
  {
    for (j = 4; j > i; j--)
    {
      if (arr[j] < arr[j - 1])
      {
        int tmp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = tmp;
      }
    }
  }

  for (i = 1; i <= 4; i++)
  {
    printf("%c", arr[i]);
  }
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system("pause");
  return (0);
}
