/* bai 4 in so luong chu so chan, le */

#include<stdio.h>

void nhapMang(int a[], int n){
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
}

void tinhToan(int a[], int n){
	int count1=0;
	int count2=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0) count1++;
		else count2++;
	}
	printf("%d\n", count1);
	printf("%d",count2);
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	nhapMang(a,n);
	tinhToan(a,n);
}
