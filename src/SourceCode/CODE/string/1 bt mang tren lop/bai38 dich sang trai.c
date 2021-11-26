/*bai 38 dich sang trai */

#include<stdio.h>
void chen(int a[],int n, int b[], int pos){
	int j=0;
	for(int i=pos;i<n;i++){
		b[j++]=a[i];
	}
}
void chen1(int a[],int n,int b[], int k){
	for(int i=0;i<n-k;i++){
		b[k+i]=a[i];
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int k;
	scanf("%d",&k);
	int pos=n-k;
	chen(a,n,b,k);
	chen1(a,n,b,pos);
	for(int i=0;i<n;i++){
		printf("%d ",b[i]);
	}
}
