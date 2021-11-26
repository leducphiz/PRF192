/* bai 996 A */

#include <stdio.h>
int main(){
	int n;
	int to100, to20, to10, to5, to1;
	scanf ("%d", &n);
	to100=n/100;
	n=n-100*to100;
	to20=n/20;
	n=n-20*to20;
	to10=n/10;
	n=n-to10*10;
	to5=n/5;
	n=n-to5*5;
	printf("%d", to100+to20+to10+to5+n);
	return 0;
}


