/*bai 44 sap cot */
#include<stdio.h>
void swap(int &a,int &b){
	int tmp=a;
	a=b;
	b=tmp;
}
int main(){
	int n;
	scanf("%d", &n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
//	for(int i=0;i<n;i++){
//		for (int j=0;j<n;j++){
//			for(int k=j+1;k<n;k++){
//				if(a[k][i]>a[j][i]){
//					swap(a[k][i],a[j][i]);
//				}
//			}
//		}
//	}
	int tmp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int max=j;
			for(int k=j+1;k<n;k++){
				if(a[k][i]>a[max][i]){
					max=k;
				}
			}
			tmp=a[max][i];
			a[max][i]=a[j][i];
			a[j][i]=tmp;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
