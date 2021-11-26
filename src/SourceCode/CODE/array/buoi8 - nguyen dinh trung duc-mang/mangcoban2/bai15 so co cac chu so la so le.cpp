/*bai 15 so co tat ca cac so la so le */

#include<stdio.h>

int layDu(int n){
	int r;
	while(n){
		r=n%10;
		n/=10;
		if(r%2==0) return 0;
	}
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n;i++){
		if(layDu(a[i])==1) printf("%d ",a[i]);
	}
	return 0;
}
