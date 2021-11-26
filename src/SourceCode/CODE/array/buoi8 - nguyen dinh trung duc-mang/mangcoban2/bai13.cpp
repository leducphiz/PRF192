#include<stdio.h>
#include<math.h>
void LietKe(int a[], int n)
{
	int ok = 0;
	for(int i = 0; i < n - 1; i++)
	{
		if((a[i] * a[i - 1] < 0) || (a[i] * a[i + 1] < 0))
		{
			ok = 1;
			printf("%d ", a[i]);
		}
	}
	if (ok == 0)
        printf("Mang ko co gia tri do");
}
int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	LietKe(a, n);
	return 0;
}
