/* bai 9 so lon nhat va vi tri, so nho nhat va vi tri */

#include<stdio.h>

void max(int a[], int n){
	int max=a[0];
	int index=-1;
	for(int i=0; i<n;i++){
		if(a[i]>=max){
			max=a[i];
			index=i+1;
		}
	}
	printf("%d %d", max, index);
}

void min(int a[], int n){
	int min=a[0];
	int index=-1;
	for(int i=0; i<n;i++){
		if(a[i]<=min){
			min=a[i];
			index=i+1;
		}
	}
	printf("\n%d %d", min, index);
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n;i++){
		scanf("%d", &a[i]);
	}
	max(a,n);
	min (a,n);
}
