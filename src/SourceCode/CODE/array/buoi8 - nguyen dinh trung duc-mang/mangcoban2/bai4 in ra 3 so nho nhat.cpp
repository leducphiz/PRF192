/*bai 4 in ra 3 so nho nhat */

#include<stdio.h>

int swap(int &a, int &b){
	int c=a;
	a=b;
	b=c;
}

void sapXep(int a[], int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]) swap(a[j],a[i]);
		}
	}
	printf("%d %d %d ", a[0], a[1], a[2]);
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
