#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
 
int main()
{
    system("cls");
    // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    int arr[100];
    int i, j, n;
    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    
    
    for (i = 0; i < n; i++)
    {
        for (j = n-1; j > i; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = tmp;
            }
        }
    }
 
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

