/* bai11 tim doan chua tat ca cac phan tu */
#include<stdio.h>
void swap(int &a, int&b){
	int tg=a;
	a=b;
	b=tg;
}

void sapXep(int a[], int n){
	for(int i=0;i<n;i++){
		for(int j=1;j<n;j++){
			if(a[i]>a[j]) swap(a[i],a[j]);
		}
	}
	printf("%d %d", a[0], a[1]);
}
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n;i++){
		scanf("%d", &a[i]);
	}
	sapXep(a,n);
}
