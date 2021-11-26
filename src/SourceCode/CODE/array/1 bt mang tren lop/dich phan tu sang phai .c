/*bai 33 dich phan tu sang phai*/

#include<stdio.h>
void chen (int a[],int n,int b[],int pos)
{
	int j=0;
	for (int i=pos;i<n;i++){
		b[j++]=a[i];
	}
}
void chen1 (int a[],int n,int b[],int k){
	for (int i=0;i<n;i++){
		b[k+i]=a[i];
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int k;
	scanf("%d",&k);
	int pos=n-k;
	int b[n];
	chen (a,n,b,pos);
	chen1(a,n,b,k);
	for (int i=0;i<n;i++){
		printf("%d ",b[i]);
	}
	return 0;
}
