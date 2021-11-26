/*liet ke phan tu xuat hien 1 lan */

#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n],b[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n;i++){
		int cnt=0;
		for(int j=0;j<n;j++){
			if(a[j]==a[i]){
				cnt++;
			}
		}
		if(cnt==1){
			printf("%d ",a[i]);
		}
	}
}
