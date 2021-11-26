/* bai 7 dem so lan xuat hien cua x trong mang */

#include<stdio.h>

void nhapMang(int a[], int n){
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
}

void check(int a[], int n){
	int x;
	scanf("%d", &x);
	int count=0;
	for(int i=0; i<n;i++){
		if(a[i]==x) count++;
	}
	printf("%d", count);
}
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	nhapMang(a,n);
	check(a,n);
}
