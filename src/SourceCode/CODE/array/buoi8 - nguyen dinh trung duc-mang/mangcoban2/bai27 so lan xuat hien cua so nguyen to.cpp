/*chua xongggg */

#include<stdio.h>
#include<math.h>
int nt(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

void check(int a[], int n){
	for(int i=0; i<n;i++){
		int cnt=0;
		for(int j=i+1;j<n;j++){
			if(nt(a[i])==a[j]){
				cnt++;
			}
		}
		printf("%d xuat hien %d lan",a[i],cnt);
	}
}

void nhapMang(int a[], int n){
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
}
int main(){
	int t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++){
		int n;
		scanf("%d", &n);
		int a[n];
		nhapMang(a,n);
		printf("Test %d\n",i);
		check(a,n);
		printf("\n");
	}
}
