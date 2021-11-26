/*bai 57 chuyen doi 2 cot trong ma tran */

#include<stdio.h>

void swap(int &a, int &b)
{
   int temp = a;
   a = b;
   b = temp;
}
int main(){
	int n,m;
	scanf("%d%d", &m,&n);
	int a[m][n],b[m][1];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	int x,y;
	scanf("%d%d", &x, &y);
	
	if((x>0 && x<=n)&&(y>0 && y<=n)){
    	for(int i=0;i<m;i++){
			swap(a[i][x-1],a[i][y-1]);
		}
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
