#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
  system("cls");
  // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n, i, arr[20], check;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (i = 0; i <= n / 2; i++)
  {
    if (arr[i] != arr[n - i - 1])
    {
      check = 0;
      break;
    }
    else
      check = 1;
  }

  if (check == 1)
    printf("1");
  else
    printf("0");

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system("pause");
  return (0);
}