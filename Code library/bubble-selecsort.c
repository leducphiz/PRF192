void bubblesort(int a[],int n)
{
	int i,j;
	int temp;
	for(i=n-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
void selsort(int a[], int n)
  { 
    int i, j, k, max,temp;
    for(i=0; i<n-1; i++)
       { max = a[i]; k = i;
         for(j = i+1; j<n; j++)
             if(a[j] > max) {max= a[j]; k = j;}
         if(k != i)
         {
         	temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
		 }
       }
  }
void printArray1(int a[], int n)
{
    int i;
    printf("\n sellect sort: ");
    for (i=0; i < n; i++)
        printf("%d\t ", a[i]);
    printf("\n");
}	
  

void printArray(int a[], int n)
{
    int i;
    printf("\n\n bubble sort: ");
    for (i=0; i < n; i++)
        printf("%d\t ", a[i]);
    printf("\n");
}	
