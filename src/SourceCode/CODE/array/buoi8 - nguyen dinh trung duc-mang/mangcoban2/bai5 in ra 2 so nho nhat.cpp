/*bai 5 in ra 2 so nho nhat */

#include<stdio.h>

void tinhToan(int a[], int n){
	int max=a[0];
	int ok=0;
	for(int i=1;i<n;i++){
		if(a[i]>=max) max=a[i];
	}
	printf("%d ", max);
	int max2=a[0];
	for(int i=1;i<n;i++){
		if(max2<=a[i] && a[i]<max){
			max2=a[i];
			ok=1;
		}
	}
	if(ok==1) printf("%d ", max2);
	else printf("-1");
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	tinhToan(a,n);
}
