#include<stdio.h>
#include<math.h>

int gt(int n){
	int i;
	int res=1;
	for(i=1; i<=n;i++){
		res*=i;
	}
	return res;
}

int toHop(int k, int n){
	return gt(n)/(gt(k)*gt(n-k));
}

void pascal(int n){
	int i,j;
	for(i=0; i<n; i++){
		for(j=0; j<=n-i+1;j++){
			printf(" ");
		}
		for(j=0;j<=i;j++){
			printf("%d ", toHop(j,i));
		}
		printf("\n");
	}
}

int main(){
	int n;
	scanf("%d", &n);
	pascal(n);
}
