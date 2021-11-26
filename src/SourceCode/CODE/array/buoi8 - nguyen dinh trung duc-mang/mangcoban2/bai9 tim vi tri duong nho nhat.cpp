/* bai 9 in ra so nguyen duong nho nhat */
#include<stdio.h>
int check(int a[], int n){
	int dem=0;
	int min;
	for(int i=0; i<n; i++){
		if(a[i]>0){
			dem++;
			min=i;
			break;
		}
	}
	if(dem==0) return -1;
	for(int i=i+1; i<n; i++){
		if(a[i]<a[min] && (a[i]>0)){
			min=i;
		}
	}
	return min+1;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	printf("%d", check(a,n));
}

