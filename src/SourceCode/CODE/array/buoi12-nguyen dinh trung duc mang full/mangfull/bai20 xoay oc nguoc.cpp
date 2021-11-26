/* bai 20 ma tran xoay oc nguoc */

#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n][n];
	int cnt=n*n;
	int hang=0,cot=n-1;
	for(int j=1;j<=n/2+1;j++){
		for(int i=hang;i<=cot;i++){
			a[hang][i]=cnt;
			cnt--;
		}
		for(int i=hang+1;i<=cot;i++){
			a[i][cot]=cnt;
			cnt--;
		}
		for(int i=cot-1;i>=hang;i--){
			a[cot][i]=cnt;
			cnt--;
		}
		for(int i=cot-1;i>hang;i--){
			a[i][hang]=cnt;
			cnt--;
		}
		hang++;
		cot--;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
