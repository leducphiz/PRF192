/* bai 3 dem va liet ke so thuan nghich */

#include<stdio.h>

int check (int n){
	int r, temp=n;
	int sum=0;
	while (n>0){
		r=n%10;
		sum=sum*10+r;
		n/=10;
	}
	if (temp==sum) return 1;
	return 0;
}

void dem(int a[], int n){
	int count=0;
	for(int i=0;i<n;i++){
		if(check(a[i])) count++;
	}
	printf("%d\n", count);
}

void lietKe(int a[], int n){
	for(int i=0; i<n ;i++){
		if(check(a[i])) printf("%d ", a[i]);
	}
}

int main(){
	int n;
	int i, count=0;
	scanf("%d", &n);
	int a[n], b[n];
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
		if(check(a[i])){
		b[count]=a[i];
		count++;
		}
	}
	printf("%d\n", count);
	for(i=0;i<count;i++){
		printf("%d ",b[i]);
	}
//	dem(a,n);
//	lietKe(a,n);
}
