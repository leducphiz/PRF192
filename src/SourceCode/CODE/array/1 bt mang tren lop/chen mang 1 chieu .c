/* chen mang mot chieu */

//#include<stdio.h>
//int main(){
//	int n,m,p;
//	scanf("%d%d%d", &n,&m,&p);
//	int a[n], b[m];
//	for(int i=0;i<n;i++){
//		scanf("%d", &a[i]);
//	}
//	for(int i=0;i<m;i++){
//		scanf("%d", &b[i]);
//	}
//	int c[n+m];
//	for(int i=0;i<p;i++){
//		printf("%d ",a[i]);
//	}
//	for(int i=p;i<m+p;i++){
//		printf("%d ",b[i-p]);
//	}
//	for(int i=m+p;i<n+m;i++){
//		printf("%d ", a[i-m]);
//	}
//}
#include<stdio.h>
int main(){
	int n,m,p;
	scanf("%d%d%d", &n, &m, &p);
	int a[n], b[m],c[n+m];
	for(int i=0; i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d", &b[i]);
	}
	for(int i=0;i<p;i++){
		c[i]=a[i];
	}
	for(int i=p;i<m+p;i++){
		c[i]=b[i-p];
	}
	for(int i=m+p;i<n+m;i++){
		c[i]=a[i-m];
	}
	for(int i=0;i<m+n;i++){
		printf("%d ",c[i]);
	}
}

