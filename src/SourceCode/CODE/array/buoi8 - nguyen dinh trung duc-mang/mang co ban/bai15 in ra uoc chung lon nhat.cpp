/* bai 15 in ra uoc chung lon nhat cua chuoi */

#include<stdio.h>

int ucln2so(int a, int b){
	if(a%b==0) return b;
	return ucln2so(b,a%b);
}

void ucln(int a[], int n){
	int UCLN=a[0];
	for(int i=0; i<n; i++){
		UCLN=ucln2so(a[i], UCLN);
	}
	printf("%d", UCLN);
}

int main(){
	int n;
	printf("Nhap so phan tu trong chuoi:");
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("\nNhap cac so trong chuoi a[%d] ",i);
		scanf("%d", &a[i]);
	}
	ucln(a,n);
}
