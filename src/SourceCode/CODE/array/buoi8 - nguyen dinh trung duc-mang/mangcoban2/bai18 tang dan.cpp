/*bai 18 kiem tra mang co phai tang dan khong */

#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>=a[j]){
				printf("no");
				return 0;
			}
		}
	}
	printf("yes");
}
