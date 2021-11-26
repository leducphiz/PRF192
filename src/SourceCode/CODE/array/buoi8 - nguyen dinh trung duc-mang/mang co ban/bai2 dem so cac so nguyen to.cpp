/*bai 2 dem so luong so la so nguyen to */

#include<stdio.h>
#include<math.h>
int nto(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	int count=0;
	for(int i=0; i<n;i++){
		if(nto(a[i])) {
			count++;
		}
	}
	printf("%d", count);
}
