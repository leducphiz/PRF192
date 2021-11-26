/*bai 1 phan them them vao truoc cac so cp =99 */ 
//#include<stdio.h>
//#include<math.h>
//void chen(int a[], int n, int pos, int x){
//	for(int i=n;i>pos;i--){
//		a[i]=a[i-1];
//	}
//	a[pos]=x;
//	++n;
//}
//
//int cp(int n){
//	int x=sqrt(n);
//	if(x*x==n){
//		return 1;
//	}
//	else return 0;
//}
//int main(){
//	int n;
//	printf("Nhap so phan tu trong mang:");
//	scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		printf("Phan tu thu a[%d]",i);
//		scanf("%d",&a[i]);
//	}
//	/*cau 1 them vao truoc cac so cp =99*/
//	for(int i=0;i<n;i++){
//		if(cp(a[i])){
//			n++;
//			chen(a,n,i,99);
//			i++;
//		}
//	}
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//}

//**************************************************************************************************
///* bai 2 them vao sau cac so fibo bang so 0*/
//#include<stdio.h>
//void them(int a[], int n, int pos,int x){
//	for(int i=n;i>pos;i--){
//		a[i]=a[i-1];
//	}
//	a[pos]=x;
//	n++;
//}
//int fibo(int n){
//	if(n==0 || n==1 || n==2) return 1;
//	int fib1=1, fib2=1,fib=2;
//	while(fib1+fib2<=n){
//		fib=fib1+fib2;
//		fib1=fib2;
//		fib2=fib;
//	}
//	if(fib==n){
//		return 1;
//	}
//	return 0;
//}
//int main(){
//	int n;
//	printf("Nhap so phan tu trong mang:");
//	scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		printf("Phan tu thu a[%d]: ",i);
//		scanf("%d",&a[i]);
//	}
//	for(int i=0;i<n;i++){
//		if(fibo(a[i])){
//			them(a,n,i+1,0); // them vao truoc thi them(a,n,i,0)
//			n++;
//			i++;	
//		}
//	}
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//}


//**************************************************************************************************
/*bai 3 them vao sau cac so palin bang so 11 */
#include <stdio.h>
void chen(int a[],int n, int pos, int x){
	for(int i=n;i>pos;i--){
		a[i]=a[i-1];
	}
	a[pos]=x;
	n++;
}
int palin(int n){
	int r, sum=0;
	int temp=n;
	while (n>0){
		r=n%10;
		sum=(sum*10)+r;
		n/=10;
	}
	if (temp==sum||temp==0) return 1;
	return 0;
}

int main(){
	int n;
	printf("Nhap so phan tu trong mang:");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Phan tu thu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(palin(a[i])==1){
			chen(a,n,i+1,11);
			n++;
			i++;
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

/*bai 4 them vao truoc va sau so nguyen to thu 3 bang so 0*/

//#include <stdio.h>
//#include<math.h>
//void chen(int a[],int n, int pos, int x){
//	for(int i=n;i>pos;i--){
//		a[i]=a[i-1];
//	}
//	a[pos]=x;
//	n++;
//}
//
//int nt(int n){
//	for(int i=2;i<=sqrt(n);i++){
//		if(n%i==0){
//			return 0;
//		}
//	}
//	return n>1;
//}
//int main(){
//	int i,n;
//	printf("Nhap so phan tu trong mang:");
//	scanf("%d",&n);
//	int a[n];
//	for(i=0;i<n;i++){
//		printf("Phan tu thu a[%d]: ",i);
//		scanf("%d",&a[i]);
//	}
//	int cnt=0,pos;
//	for(i=0;i<n;i++){
//		if(nt(a[i])){
//			cnt++;
//		}
//		if(cnt==3){
//			pos=i;
//			break;
//		}
//	}
//	if(cnt==3){
//		chen(a,n,pos,0);
//		n++;
//		i++;
//		chen(a,n,pos+2,0);
//		n++;
//		i++;
//	}
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//}

/*bai 5 them 3 phan tu bang 0 vao truoc so chinh phuong thu 2*/

//#include <stdio.h>
//#include<math.h>
//void chen(int a[],int n, int pos, int x){
//	for(int i=n;i>pos;i--){
//		a[i]=a[i-1];
//	}
//	a[pos]=x;
//	n++;
//}
//
//int cp(int n){
//	int x=sqrt(n);
//	if(x*x==n){
//		return 1;
//	}
//	else return 0;
//}
//
//int main(){
//	int i,n;
//	printf("Nhap so phan tu trong mang:");
//	scanf("%d",&n);
//	int a[n];
//	for(i=0;i<n;i++){
//		printf("Phan tu thu a[%d]: ",i);
//		scanf("%d",&a[i]);
//	}
//	int cnt=0,pos;
//	for(i=0;i<n;i++){
//		if(cp(a[i])){
//			cnt++;
//		}
//		if(cnt==2){
//			pos=i;
//			break;
//		}
//	}
//	if(cnt==2){
//		for(int j=1;j<=3;j++){
//		chen(a,n,pos,0);
//		n++;
//		i++;
//		}
//	}
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//}

/*bai 6 them 2 phan tu bang 0 vao sau snt thu 2 tinh tu cuoi len*/
//#include <stdio.h>
//#include<math.h>
//void chen(int a[],int n, int pos, int x){
//	for(int i=n;i>pos;i--){
//		a[i]=a[i-1];
//	}
//	a[pos]=x;
//	n++;
//}
//
//int nt(int n){
//	for(int i=2;i<=sqrt(n);i++){
//		if(n%i==0){
//			return 0;
//		}
//	}
//	return n>1;
//}
//int main(){
//	int i,n;
//	printf("Nhap so phan tu trong mang:");
//	scanf("%d",&n);
//	int a[n];
//	for(i=0;i<n;i++){
//		printf("Phan tu thu a[%d]: ",i);
//		scanf("%d",&a[i]);
//	}
//	int cnt=0,pos;
//	for(i=n-1;i>=0;i--){
//		if(nt(a[i])){
//			cnt++;
//		}
//		if(cnt==2){
//			pos=i;
//			break;
//		}
//	}
//	if(cnt==2){
//		chen(a,n,pos+1,0);
//		n++;
//		i++;
//		chen(a,n,pos+1,0);
//		n++;
//		i++;
//	}
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//}
