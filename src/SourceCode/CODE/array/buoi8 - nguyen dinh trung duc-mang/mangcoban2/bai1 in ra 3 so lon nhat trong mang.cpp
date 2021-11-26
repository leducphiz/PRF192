/*bai 1 in ra 3 so lon nhat trong mang */

#include<stdio.h>
void swap(int &a, int &b){
	int c=a;
	a=b;
	b=c;
}

void sapXep(int a[], int n){
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n;j++){
			if(a[j]>a[i]) 
				swap(a[i], a[j]);
		}
	}
	printf("%d %d %d", a[0], a[1], a[2]);
}

#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=1;i<n;i++){
		scanf("%d", &a[i]);
	}
	sapXep(a,n);
}


