void giamdan(float a[], int n)
{
	int i,j,min;
	for (i=0; i < n-1; i++)
	{
		for (j=i+1; j<n; j++)
		{
			if (a[i]<a[j])
			{
				min = a[i];
				a[i] = a[j];
				a[j] = min;
			}
		}
	}
	
}
void tangdan(float a[], int n)
{
	int i,j,min;
	for (i=0; i < n-1; i++)
	{
		for (j=i+1; j<n; j++)
		{
			if (a[i]>a[j])
			{
				max = a[i];
				a[i] = a[j];
				a[j] = max;
			}
		}
	}
	
}
