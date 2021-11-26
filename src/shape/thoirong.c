#include <stdio.h>
#include <math.h>

int main()
{
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	
	int n;
	scanf("%d", &n);
	
	char arr[100][100] = {' '};
	int mid = n / 2;
	int count = 0;
	
	
	
	//Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	int i, j;
	for (i = 0; i < n;i++)
	{
		for(j = 0 ;j < n;j++)
		{
			if(j <= mid)
			{
				if(i <= mid)
					if((i + j) == mid)
						arr[i][j] = '*';
				if(i > mid)
						arr[i][j] = arr[2 * mid - i][j];
			}
			else
			{
				arr[i][j] = arr[i][2 * mid - j];
			}
		}
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%c", arr[i][j]);
		}
		count++;
		if(count < n)	
		{
			printf("\n");
 		}
	}
	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n"); 
	system ("pause");
	return(0);
}
