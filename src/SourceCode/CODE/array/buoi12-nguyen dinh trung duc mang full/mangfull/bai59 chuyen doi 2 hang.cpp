/*bai 59 chuyen doi 2 hang */

#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d", &m,&n);
	int a[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	int x,y;
	scanf("%d%d", &x, &y);
	
	if((x>0 && x<=m)&&(y>0 && y<=m)){
    	for(int i=0;i<n;i++){
			int tmp=a[x-1][i];
			a[x-1][i]=a[y-1][i];
			a[y-1][i]=tmp;
		}
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
