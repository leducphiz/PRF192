/*bai 32 hang co phan tu nhieu snt nhat */

#include<stdio.h>
#include<math.h>

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	int max,pos;
	for(int i=0;i<n;i++){
		int cnt=0;
		for(int j=0;j<n;j++){
			if(nt(a[i][j])){
				cnt++;
			}
			if(cnt>max){
				max=cnt;
				pos=i;
			}
		}
	}
	printf("%d\n",pos+1);
	for(int i=0;i<n;i++){
		if(nt(a[pos][i])) printf("%d ",a[pos][i]);
	}
}
