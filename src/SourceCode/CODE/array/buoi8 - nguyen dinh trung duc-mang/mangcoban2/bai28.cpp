/*bai 28 */

#include<stdio.h>
int main(){
	int n, sum=0;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		sum+=a[i];
	}
	if(sum>=1){
	printf("HARD");
	return 0;
	}	
	printf("EASY");
}
