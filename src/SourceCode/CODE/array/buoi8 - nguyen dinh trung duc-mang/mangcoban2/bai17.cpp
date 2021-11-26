/* bai 17 mang cho truoc co ton tai 2 so nguyen lien tiep khong */

#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=1; j<n;j++){
			if(abs(a[j]-a[i])==1){
			printf("yes");
			return 0;
		}
		}
	}
	printf("no");
}
