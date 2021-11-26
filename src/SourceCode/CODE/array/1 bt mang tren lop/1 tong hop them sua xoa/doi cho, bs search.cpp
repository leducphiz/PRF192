/*doi cho so chinh phuong dau tien va so nguyen to dau tien cho nhau */

//#include<stdio.h>
//#include<math.h>
//int nt(int n){
//	int i;
//	for(i=2;i<=sqrt(n);i++){
//		if(n%i==0) return 0;
//	}
//	return n>1;
//}
//int cp(int n){
//	int x=sqrt(n);
//	if(x*x==n) return 1;
//	else return 0;
//}
//int main(){
//	int i,n;
//	printf("Nhap so phan tu trong mang: ");
//	scanf("%d",&n);
//	int a[100];
//	int pos1,pos2;
//	for(i=0;i<n;i++){
//		printf("phan tu thu a[%d] la: ",i);
//		scanf("%d", &a[i]);
//	}
//	for(i=0;i<n;i++){
//		if(nt(a[i])){
//			pos1=i;
//			break;
//		}
//	}
//	for(i=0;i<n;i++){
//		if(cp(a[i])){
//			pos2=i;
//			break;
//		}
//	}
//	int tmp=a[pos1];
//	a[pos1]=a[pos2];
//	a[pos2]=tmp;
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//}

/*bai 2 doi cho so chinh phuong thu 2 va so nguyen to thu 2 cho nhau */

//#include<stdio.h>
//#include<math.h>
//int nt(int n){
//	int i;
//	for(i=2;i<=sqrt(n);i++){
//		if(n%i==0) return 0;
//	}
//	return n>1;
//}
//int cp(int n){
//	int x=sqrt(n);
//	if(x*x==n) return 1;
//	else return 0;
//}
//int main(){
//	int a[100];
//	int i, n;
//	printf("Nhap so phan tu trong mang: ");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		printf("Phan tu thu a[%d] la: ",i);
//		scanf("%d",&a[i]);
//	}
//	int cnt=0,pos1,pos2;
//	for(i=0;i<n;i++){
//		if(nt(a[i])){
//			cnt++;
//		}
//		if(cnt==2){
//			pos1=i;
//			break;
//		}
//	}
//	cnt=0;
//	for(i=0;i<n;i++){
//		if(cp(a[i])){
//			cnt++;
//		}
//		if(cnt==2){
//			pos2=i;
//			break;
//		}
//	}
//	int tmp=a[pos1];
//	a[pos1]=a[pos2];
//	a[pos2]=tmp;
//	for(i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//}

/*bai 3 doi cho so cp cuoi cung va snt cuoi cung*/
//#include<stdio.h>
//#include<math.h>
//int nt(int n){
//	int i;
//	for(i=2;i<=sqrt(n);i++){
//		if(n%i==0) return 0;
//	}
//	return n>1;
//}
//int cp(int n){
//	int x=sqrt(n);
//	if(x*x==n) return 1;
//	else return 0;
//}
//int main(){
//	int i,n;
//	printf("Nhap so phan tu trong mang: ");
//	scanf("%d",&n);
//	int a[100];
//	int pos1,pos2;
//	for(i=0;i<n;i++){
//		printf("phan tu thu a[%d] la: ",i);
//		scanf("%d", &a[i]);
//	}
//	for(i=n-1;i>=0;i--){
//		if(nt(a[i])){
//			pos1=i;
//			break;
//		}
//	}
//	for(i=n-1;i>=0;i--){
//		if(cp(a[i])){
//			pos2=i;
//			break;
//		}
//	}
//	int tmp=a[pos1];
//	a[pos1]=a[pos2];
//	a[pos2]=tmp;
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//}
/*binary search*/
//int bs(int a[],int n,int x){
//	int l=0;
//	int r=n-1;
//	while(l<=r){
//		int mid=l+(r-l)/2;
//		if(a[mid]==x){
//			return 1;
//		}
//		else if(a[mid]>x){
//			r=mid-1;
//		}
//		else{
//			l=mid+1;
//		}
//	}
//	return 0;
//}

/* bai toan tinh buoc */
#include<stdio.h>
int bs(int a[],int n,int pos){
	int l=0,r=n-1;
	while(l<=r){
		int mid=l+(r-l)/2;
		if(mid==pos){
			return 1;
		}
		else if(mid>pos){
			r=mid-1;
		}
		else{
			l=mid+1;
		}
	}
	return 0;
}

int main(){
	int i,n;
	printf("Nhap so luong phan tu trong mang: ");
	scanf("%d",&n);
	int a[100];
	for(i=0;i<n;i++){
		printf("Phan tu thu a[%d] la: ",i);
		scanf("%d",&a[i]);
	}
	printf("Phan tu thu: ");
	int x;
	scanf("%d",&x);
	int l=0,r=n-1,cnt=1;
	while(l<=r){
		int mid=(l+(r-l)/2);
		if(mid==x){
			printf("%d",cnt);
			return 0;
		}
		else if(mid>x){
			r=mid-1;
			cnt++;
		}
		else{
			l=mid+1;
			cnt++;
		}
	}
}
