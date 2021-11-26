/*bai 3 in ra trung vi cua mang */

#include<stdio.h>
int main (){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	if(n%2!=0){
		printf("%d", a[n/2]);
	}
	else printf ("%.2f", (float (a[n/2]) + a[n/2-1])/2);
}
