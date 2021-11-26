/*tim cot co tong phan tu lon nhat va in ra */
#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int max=-1e9;
	int pos;
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=0;j<n;j++){
			sum+=a[j][i];
			if(sum>max){
				max=sum;
				pos=i;
			}
		}
	}
	printf("%d\n", pos+1);
	for(int i=0;i<n;i++){
		printf("%d ",a[i][pos]);
	}
}
