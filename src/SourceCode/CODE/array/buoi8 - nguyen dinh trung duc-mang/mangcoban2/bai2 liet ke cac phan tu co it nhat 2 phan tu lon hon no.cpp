/* bai 2 liet ke cac phan tu co it nhat 2 phan tu lon hon no */
/* lam sai */

#include<stdio.h>


int main(){
	int i,n;
	scanf("%d", &n);
	int a[n];
	for( i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int count=0;
	for( i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]>a[i]) count++;
		}
			if(count>=2) printf("%d ",a[i]);
	}

	return 0;
}
