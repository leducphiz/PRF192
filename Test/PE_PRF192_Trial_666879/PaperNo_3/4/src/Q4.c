#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
  system("cls");
  // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

  int arr[7];
  int i, j;
  for (i = 0; i < 7; i++)
  {
    scanf("%d", &arr[i]);
  }

  for (i = 0; i <= 7; i++)
  {
    for (j = 6; j > i; j--)
    {
      if (arr[j] < arr[j - 1])
      {
        int tmp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = tmp;
      }
    }
  }

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for (i = 0; i < 7; i++)
  {
    printf("%d ", arr[i]);
  }
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system("pause");
  return (0);
}
