/*bai 50 liet ke va dem so lan xuat hien trong mang */

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=1;
	}
	for(int i=0;i<n;i++){
		int cnt=1;
		if(b[i]){
			for(int j=i+1;j<n;j++){
				if(a[j]==a[i]){
					cnt++;
					b[j]=0;
				}
			}
			printf("%d %d\n", a[i],cnt);
		}
	}
}
