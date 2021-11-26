/* bai10 tim phan tu cach xa x nhat */

#include<stdio.h>
#include<math.h>

void giaTri(int a[], int n, int x){
	int max= abs(a[0]-x);
	int j=0;
	for(int i=1;i<n;i++){
		if(max<abs(a[i]-x)){
			 max=abs(a[i]-x);
			 j=i;
		}
	}
	printf("%d", a[j]);
}

int main(){
	int n,i,temp;
	scanf("%d", &n);	
	int a[n];
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	int x;
	scanf("%d", &x);
	giaTri(a,n,x);
}


