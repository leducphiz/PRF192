/* hoc buoi 12 . Sap xep bang buble sort*/

#include<stdio.h>
#include<math.h>

void bubble(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=a[j];
			}
		}
	}
}

void insertion(int a[], int n){
	for(int i=1;i<n;i++){
		int x=a[i];
		int j=i-1;
		while(j>=0&&a[j]>x){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=x;
	}
}

//binary search

int bs(int a[],int n,int x){
	int l=0;
	int r=n-1;
	while(l<=r){
		int mid=l+(r-l)/2;
		if(a[mid]==x){
			return 1;
		}
		else if(a[mid]>x){
			r=mid-1;
		}
		else{
			l=mid+1;
		}
	}
	return 0;
}

/*nhan 2 ma tran chuyen vi */
//#include<stdio.h>
//int main(){
//	int n,m,p;
//	scanf("%d%d%d", &n,&m,&p);
//	int a[n][m], b[m][p], c[n][p];
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			scanf("%d",&a[i][j]);
//		}
//	}
//	for(int i=0;i<m;i++){
//		for(int j=0;j<p;j++){
//			scanf("%d",&b[i][j]);
//		}
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<p;j++){
//			c[i][j]=0;
//			for(int k=0;k<m;k++){
//				c[i][j]+=a[i][k]*b[k][j];
//			}
//		}
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<p;j++){
//			printf("%d ",c[i][j]);
//		}
//		printf("\n");
//	}
//}

/* xoay oc fibonacci */

//int main(){
//	int n;
//	scanf("%d", &n);
//	int a[n][n];
//	int hang=0, cot=n-1;
//	int cnt=1;
//	for(int j=1;j<=n/2+1;j++){
//		for(int i=hang;i<=cot;i++){
//			a[hang][i]=cnt;
//			cnt++;
//		}
//		for(int i=hang+1;i<=cot;i++){
//			a[i][cot]=cnt;
//			cnt++;
//		}
//		for(int i=cot-1;i>=hang;i--){
//			a[cot][i]=cnt;
//			cnt++;
//		}
//		for(int i=cot-1;i>hang;i--){
//			a[i][hang]=cnt;
//			cnt++;
//		}
//		hang++;
//		cot--;
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//}


