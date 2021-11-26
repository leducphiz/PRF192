/* liet ke cac so trong mang 1 chieu co chu so dau tien la so le */
#include<stdio.h>

int layDu(int n){
	int r;
	while(n){
		r=n%10;
		n/=10;
	}
	return r;
}

void solve(int a[], int n){
	for(int i=0; i<n; i++){
		if(layDu(a[i])%2!=0) printf("%d ",a[i]);
	}
}

int main (){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	solve(a,n);
}
