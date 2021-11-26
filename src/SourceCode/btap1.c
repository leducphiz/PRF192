#include <stdio.h>


int main() {
	int n;
	int S = 0;printf("Enter integer number n = ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i ++)
	{ 
		S += i;	
	}
	printf("1+2+....+n=%d\n", S);
	
	getch();
    return 0;
}

