/* bai 14 tim phan tu xuat hien nhieu nhat */
#include<stdio.h>
int count(int a[], int n, int x){
	int temp=0;
	for(int i=0 ;i<n; i++){
		if(a[i]==x) temp++;
	}
	return temp;
}
void tinhToan(int a[], int n){
	int temp1, temp=count(a,n,a[0]);
	int index,i;
	for(i=1;i<n;i++){
		temp1=count(a,n,a[i]);
		if(temp1 > temp){
			temp=temp1;
			index=a[i];
		}	
	}
	printf("%d ",index);
	printf(" %d ", temp);
}
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n;i++){
		scanf("%d", &a[i]);
	}
	tinhToan(a,n);
	return 0;
}


