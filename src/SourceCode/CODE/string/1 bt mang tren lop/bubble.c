/*bai 31 sap xep tang */
#include<stdio.h>
void bubble(int a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int tmp=a[j+1];
				a[j+1]=a[j];
				a[j]=tmp;
			}
		}
	}
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	bubble(a,n);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
