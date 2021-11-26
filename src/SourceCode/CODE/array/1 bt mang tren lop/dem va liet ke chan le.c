/*dem va in ra phan tu chan le */

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],b[n],c[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int sum1=0,sum2=0,dem=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			sum1++;
			b[dem]=a[i];
			dem++;
		}
	}
	dem=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==1){
			sum2++;
			c[dem]=a[i];
			dem++;
		}
	}
	printf("%d ",sum1);
	for(int i=0;i<sum1;i++){
		printf("%d ",b[i]);
	}
	printf("\n%d ",sum2);
	for(int i=0;i<sum2;i++){
		printf("%d ",c[i]);
	}
}
