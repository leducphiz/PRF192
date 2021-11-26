/*bai 49 xoay oc fibo*/
#include<stdio.h>
int fibo(int n){
	if(n==0) return 0;
	else if(n==1) return 1;
	return(fibo(n-2)+fibo(n-1));
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n][n],b[n*n];
	for(int i=0;i<n*n;i++){
		b[i]=fibo(i);
	}
	int hang=0, cot=n-1,cnt=0;
	for(int j=0;j<(n/2)+1;j++){
		for(int i=hang;i<=cot;i++){
			a[hang][i]=b[cnt];
			cnt++;
		}
		for(int i=hang+1;i<=cot;i++){
			a[i][cot]=b[cnt];
			cnt++;
		}
		for(int i=cot-1;i>=hang;i--){
			a[cot][i]=b[cnt];
			cnt++;
		}
		for(int i=cot-1;i>hang;i--){
			a[i][hang]=b[cnt];
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
