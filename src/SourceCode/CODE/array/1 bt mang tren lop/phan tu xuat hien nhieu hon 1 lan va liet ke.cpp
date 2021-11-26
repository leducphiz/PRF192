/*bai 48 phan tu xuat hien nhieu hon 1 lan va liet ke */

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],b[n],res[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=1;
	}
	int dem,cnt=0;
	for(int i=0;i<n;i++){
		dem=1;
		if(b[i]){
			for(int j=i+1;j<n;j++){
				if(a[j]==a[i]){
					dem++;
					b[j]=0;
				}
			}
			if(dem>=2){
				res[cnt]=a[i];
				cnt++;
			}
		}
	}
	printf("%d\n",cnt);
	for(int i=0;i<cnt;i++){
		printf("%d ",res[i]);
	}
}
