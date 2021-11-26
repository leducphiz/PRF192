/*bai toan xoa*/

/*bai 1 xoa cac so chinh phuong */
//**************************************************************************************************
//#include<stdio.h>
//#include<math.h>
//
//void xoa(int a[],int n,int pos){
//	for(int i=pos;i<n-1;i++){
//		a[i]=a[i+1];
//	}
//	n--;
//}
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
//		printf("Phan tu thu a[%d]: ",i);
//		scanf("%d",&a[i]);
//	}
//	for(int i=0;i<n;i++){
//		if(cp(a[i])){
//			xoa(a,n,i); 
//			n--;
//			i--;	
//		}
//	}
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//}

/*bai 2 xoa cac so fibo*/
//**************************************************************************************************

//#include<stdio.h>
//void xoa(int a[],int n,int pos){
//	for(int i=pos;i<n-1;i++){
//		a[i]=a[i+1];
//	}
//	n--;
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
//			xoa(a,n,i); 
//			n--;
//			i--;	
//		}
//	}
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//}

/*bai 3 xoa cac so palin*/
//**************************************************************************************************

//#include<stdio.h>
//void xoa(int a[],int n,int pos){
//	for(int i=pos;i<n-1;i++){
//		a[i]=a[i+1];
//	}
//	n--;
//}
//int palin(int n){
//	int r, sum=0;
//	int temp=n;
//	while (n>0){
//		r=n%10;
//		sum=(sum*10)+r;
//		n/=10;
//	}
//	if (temp==sum||temp==0) return 1;
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
//		if(palin(a[i])){
//			xoa(a,n,i); 
//			n--;
//			i--;	
//		}
//	}
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//}

/*bai 4 xoa ptu truoc va sau snt*/ 
//**************************************************************************************************

//#include <stdio.h>
//#include<math.h>
//int snt (int n){
//	for (int i=2;i<=sqrt(n);i++){
//		if (n%i==0)
//			return 0;
//	}
//	return n>1;
//}
//int main (){
//	int n;
//	printf("Nhap so phan tu trong mang: ");
//	scanf("%d",&n);
//	int a[n];
//	int b[100],t=0;
//	for (int i=0;i<n;i++){
//		printf("Phan tu a[%d] la: ",i);
//		scanf("%d",&a[i]);
//	}
//	for (int i=0;i<n;i++){
//		if (snt(a[i])==1){
//			a[i-1]=0;
//		}
//	}
//	for (int i=0;i<n;i++){
//		if (snt(a[i])==1)
//			a[i+1]=0;
//	}
//	for (int i=0;i<n;i++){
//		if (a[i]!=0){
//			b[t]=a[i];
//			t++;
//		}
//	}
//	for (int i=0;i<t;i++){
//		printf("%d ",b[i]);
//	}
//	return 0;
//}

/*bai 5 xoa snt t3 tu duoi len*/ 
//**************************************************************************************************

//#include<stdio.h>
//#include<math.h>
//void xoa(int a[],int n,int pos){
//	for(int i=pos;i<n-1;i++){
//		a[i]=a[i+1];
//	}
//	n--;
//}
//int nt(int n){
//	for(int i=2;i<=sqrt(n);i++){
//		if(n%i==0){
//			return 0;
//		}
//	}
//	return n>1;
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
//	int cnt=0;
//	for(int i=n-1;i>=0;i--){
//		if(nt(a[i])){
//			cnt++;	
//		}
//		if(cnt==3){
//			xoa(a,n,i);
//			n--;
//			i--;
//			break;
//		}
//	}
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//}

/*bai 6 xoa 2 phan tu sau snt t2*/ 
//**************************************************************************************************

//#include<stdio.h>
//#include<math.h>
//void xoa(int a[],int n,int pos){
//	for(int i=pos;i<n-1;i++){
//		a[i]=a[i+1];
//	}
//	n--;
//}
//int nt(int n){
//	for(int i=2;i<=sqrt(n);i++){
//		if(n%i==0){
//			return 0;
//		}
//	}
//	return n>1;
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
//	int cnt=0;
//	for(int i=0;i<n;i++){
//		if(nt(a[i])){
//			cnt++;	
//		}
//		if(cnt==2){
//			xoa(a,n,i+1);
//			n--;
//			i--;
//			xoa(a,n,i+2);
//			n--;
//			i--;
//			break;
//		}
//	}
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//}

/*bai 7 xoa 3 snt dau tien */

#include<stdio.h>
#include<math.h>
void xoa(int a[],int n,int pos){
	for(int i=pos;i<n-1;i++){
		a[i]=a[i+1];
	}
	n--;
}
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
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
	int cnt=0;
	for(int i=0;i<n;i++){
		if(nt(a[i])){
			cnt++;
			xoa(a,n,i);
			n--;
			i--;	
		}
		if(cnt==3){
			break;
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
