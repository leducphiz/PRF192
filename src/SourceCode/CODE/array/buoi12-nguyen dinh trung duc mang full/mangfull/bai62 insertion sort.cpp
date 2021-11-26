/*bai 62 insertion sort*/

#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=1;i<n;i++){
		int x=a[i];
		int j=i-1;
		while(j>=0&&a[j]>x){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=x;
		for(int j=0;j<n;j++){
			printf("%d ",a[j]);
		}
		printf("\n");
	}
}
