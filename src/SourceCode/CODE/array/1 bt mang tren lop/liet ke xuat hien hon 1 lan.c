/*liet ke phan tu xuat hien nhieu hon 1 lan trong mang */

#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n],b[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		b[i]=1;
	}
	int cnt;
	for(int i=0;i<n;i++){
		cnt=1;
		if(b[i]==1){
			for(int j=i+1;j<n;j++){
				if(a[j]==a[i]){
					cnt++;
					b[j]=0;
				}
			}
			if(cnt>=2) printf("%d ",a[i]);
		}
	}
}
