/*bai 63 selection sort*/

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		int k=a[i];
		a[i]=a[min];
		a[min]=k;
		for(int j=0;j<n;j++){
			printf("%d ",a[j]);
		}
		printf("\n");
	}
}
