/*bai 36 dem va liet ke cac phan tu xuat hien duy nhat 1 lan */

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],b[n],c[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=1;
	}
	int dem=0;
	for(int i=0;i<n;i++){
		int cnt=0;
		if(b[i]){
			for(int j=i+1;j<n;j++){
				if(a[j]==a[i]){
					cnt++;
					b[j]=0;
				}
			}
			if(cnt==0){
				c[dem]=a[i];
				dem++;
			}
		}
	}
	printf("%d\n",dem);
	for(int i=0;i<dem;i++){
		printf("%d ",c[i]);
	}
}
