#include <stdio.h>



int main() {

  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int a[100];
int n;
printf ("nhap so luong phan tu n=");
do {
	scanf("%d", &n);
	if(n <= 0){
		printf(" nhap lai n = ");
	}

 for(int i=0; i<n; i++)
  {
  	printf("\nNhap a[%d] =",i);
  	scanf("%d", &a[i]);
  }
  int tg;
  for (int i = 0; i < n - 1; i++)
  {
  	for (int j= i + 1; j < n; j++)
  	{if (a[i] < a[j]);
  	{ tg = a[i];
  	a[i] =a[j];
  	a[j]= tg;
	  }
}
  }
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
for (int i=0; i<n; i++)
{printf("%5d", a[i]);
}
}






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE



