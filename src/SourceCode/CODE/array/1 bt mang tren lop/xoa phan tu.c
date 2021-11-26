/* xoa phan tu khoi mang */

#include<stdio.h>
void xoa(int a[], int n, int pos){
	for(int i=pos;i<n-1;i++){
		a[i]=a[i+1];
	}
	--n;
}
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int x;
	scanf("%d", &x);
//	for(int j=x-1;j<n-1;j++){
//		a[j]=a[j+1];
//	}
//	for(int i=0;i<n-1;i++){
//		printf("%d ",a[i]); 
//	}
	xoa(a,n,x-1);
	n--;
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
