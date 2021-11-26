/*bai 21*/
#include<stdio.h>
#include<math.h>

int chinhPhuong(int n){
	int r=sqrt(n);
	if(r*r==n) return 1;
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n;i++){
		scanf("%d", &a[i]);
	}
	int count=0;
	for(int i=0;i<n;i++){
		if(chinhPhuong(a[i])) count++;
	}
	printf("%d", count);
}

