/* bai 10 in ra so nho nhat va so nho thu 2 */

/* chua xongggggggggggg */

#include<stdio.h>

void tim2so(int a[], int n){
	int min, min2;
	int vtmin=0, vtmin2=0;
	min=a[0];
	for(int j=1; j<n; j++){
		if(min>a[j]){
			min=a[j];
			vtmin=j;
		}
	}
	printf("%d", vtmin+1);
	if(vtmin==0)
		min2=a[1];
	else min2=a[0];
	for(int j=0;j<n;j++){
		if(min2>a[j] && a[j]>min){
			min2 = a[j];
		}
	}
	for(int j=0;j<n;j++){
		if(a[j]==min2) 
			vtmin2=j;
	}
	printf("\n%d", vtmin2+1);
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	tim2so(a,n);
}



