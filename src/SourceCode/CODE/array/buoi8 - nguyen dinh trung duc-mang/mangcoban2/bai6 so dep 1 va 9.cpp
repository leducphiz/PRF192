/* bai 6 so dep, so 1 va 9 */

#include<stdio.h>
int dem(int &n){
	int r;
	int count1=0, count2=0;
	while(n){
		r=n%10;
		n/=10;
		if(r==1) count1++;
		else if(r==9) count2++;
	}
	if(count1>=1 && count2>=1) return 1;
	else return 0;
}

void check(int a[], int n){
	int count=0;
	for(int i=0; i<n; i++){
		if(dem(a[i])==1) count++;
	}
	printf("%d", count);
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	check(a,n);
}
