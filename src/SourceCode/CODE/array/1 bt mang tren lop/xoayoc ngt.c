#include<stdio.h>
#include<math.h>
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main(){
	int n;
	scanf("%d", &n);
	int a[n][n];
	int c=n*n;
	int b[c];
	int cnt=0;
	for(int i=2;cnt<=c;i++){
		if(nt(i)){
			b[cnt]=i;
			cnt++;
		}
	}
	int dem=0;
	int hang=0, cot=n-1;
	for(int j=1;j<=n/2+1;j++){
		for(int i=hang;i<=cot;i++){
			a[hang][i]=b[dem];
			dem++;
		}
		for(int i=hang+1;i<=cot;i++){
			a[i][cot]=b[dem];
			dem++;
		}
		for(int i=cot-1;i>=hang;i--){
			a[cot][i]=b[dem];
			dem++;
		}
		for(int i=cot-1;i>hang;i--){
			a[i][hang]=b[dem];
			dem++;
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
