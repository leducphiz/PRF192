/*tim max va min trong nang */

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int min=1e9;
	int max=-1e9;
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("%d %d ", max, min);
}
