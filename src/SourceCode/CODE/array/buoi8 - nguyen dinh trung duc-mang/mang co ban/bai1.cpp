/*bai 1 in ra so lon thu nhat va thu 2 */

#include<stdio.h>

void nhapMang(int a[],int n){
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}

void tinhToan(int a[], int n){
	int max1, max2;
	if(a[0]>a[1]){
		max1=a[0];
		max2=a[1];
	}
	else{
		max1=a[1];
		max2=a[0];
	}
	for(int i=2;i<n;i++){
		if(a[i]>max1){
			max2=max1;
			max1=a[i];
		}
		else if(a[i]>max2){
			max2=a[i];
		}
	}
	printf("%d", max1);
	printf("\n%d", max2);
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	nhapMang(a,n);
	tinhToan(a,n);
}

/*sap xong cac so lon nhat sang ben trai sau do in ra 2 so o vi tri 1 va 0 */

//#include<stdio.h>
//
//void swap(int &a, int &b){
//	int tg=a;
//	a=b;
//	b=tg;
//}
//
//void sapXep(int a[], int n){
//	for(int i=0; i<n; i++){
//		for(int j=i+1;j<n;j++){
//			if(a[i]<a[j]) swap(a[i], a[j]);
//		}
//	}
//}
//
//void tinhToan(int a[], int n){
//	sapXep(a, n);
//	printf("%d", a[0]);
//	printf("\n%d", a[1]);
//}
//
//int main(){
//	int n;
//	scanf("%d", &n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d", &a[i]);
//	}
//	tinhToan(a,n);
//}
