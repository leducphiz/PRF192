/*ma tran xoay oc */

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];
	int cnt=1;
	int hang=0;
	int cot=n-1;
	for(int i=1;i<=(n/2)+1;i++){
		for(int j=hang;j<=cot;j++){
			a[hang][j]=cnt;
			cnt++;
		}
		for(int j=hang+1;j<=cot;j++){
			a[j][cot]=cnt;
			cnt++;
		}
		for(int j=cot-1;j>=hang;j--){
			a[cot][j]=cnt;
			cnt++;
		}
		for(int j=cot-1;j>hang;j--){
			a[j][hang]=cnt;
			cnt++;
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
