							/* bai 2 them vao truoc cac so fibo bang so 0*/
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
//			them(a,n,i,0);
//			n++;
//			i++;	
//		}
//	}
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//}

							/*bai 3 them vao truoc va sau SNT thu 3 1 so 0*/

//#include<stdio.h>
//#include<math.h>
//void them(int a[], int n, int pos,int x){
//	for(int i=n;i>pos;i--){
//		a[i]=a[i-1];
//	}
//	a[pos]=x;
//	n++;
//}
//int nt(int n){
//	for(int i=2;i<=sqrt(n);i++){
//		if(n%i==0) return 0;
//	}
//	return n>1;
//}
//int main(){
//	int n,i;
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
//		if(cnt==2){
//			pos=i;
//			break;
//		}
//	}
//	them(a,n,pos,0);
//	n++;
//	i++;
//	them(a,n,pos+2,0);
//	n++;
//	i++;
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//}
/* bai 4 them 3 phan tu bang 0 vao truoc so chinh phuong thu 2*/

#include<stdio.h>
#include<math.h>
int cp(int n){
	int x=sqrt(n);
	if(x*x==n) return 1;
	return 0;
}

void them(int a[], int n, int pos,int x){
	for(int i=n;i>pos;i--){
		a[i]=a[i-1];
	}
	a[pos]=x;
	n++;
}

int main(){
	int n;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Phan tu thu a[%d]: ",i);
		scanf("%d", &a[i]);
	}
	int cnt=0,pos;
	for(int i=0;i<n;i++){
		if(cp(a[i])){
			cnt++;
		}
		if(cnt==2){
			pos=i;
			break;
		}
	}
	for(int j=0;j<3;j++){
		int i;
		them(a,n,pos,0);
		n++;
		i++;
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

//#include <stdio.h>
//int palin(int i){
//	int r, sum=0;
//	int temp=i;
//	while (i>0){
//		r=i%10;
//		sum=(sum*10)+r;
//		i/=10;
//	}
//	if (temp==sum) return 1;
//	return 0;
//}
