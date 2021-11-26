/*bai 43 tim max min và vi tri*/

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int max=-1e9,min=1e9,pos1,pos2;
	for(int i=0;i<n;i++){
		if(a[i]>=max){
			max=a[i];
			pos1=i;
		}
		if(a[i]<=min){
			min=a[i];
			pos2=i;
		}
	}
	printf("%d %d\n%d %d", max, pos1+1, min, pos2+1);
}
