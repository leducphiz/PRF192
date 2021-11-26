/*bai 7 ktra mang doi xung */

#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int l=0, r=n-1;
	while(l<=r){
		if(a[l]!=a[r]){
			printf("0");
			return 0;
		}
			l++;
			r--;
	}
	printf("1");
}
