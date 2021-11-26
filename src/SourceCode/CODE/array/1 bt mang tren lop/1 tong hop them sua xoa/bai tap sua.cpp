
#include<stdio.h>
#include<math.h>

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

int fibo(int n){
	if(n==0 || n==1 || n==2) return 1;
	int fib1=1, fib2=1,fib=fib1+fib2;
	while(fib1+fib2<=n){
		fib=fib1+fib2;
		fib1=fib2;
		fib2=fib;
	}
	if(fib==n){
		return 1;
	}
	else return 0;
}

int cp(int n){
	int x=sqrt(n);
	if(x*x==n){
		return 1;
	}
	else return 0;
}

void chen(int a[], int n, int pos, int x){
	for(int i=n;i>pos;i--){
		a[i]=a[i-1];
	}
	a[pos]=x;
	++n;
}

void xoa(int a[], int n, int pos){
    for(int i=pos;i<n-1;i++){
    	a[i]=a[i+1];
	}
	--n;
}

int main(){
	int n;
	printf("Nhap so phan tu trong mang:");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Phan tu thu a[%d]",i);
		scanf("%d",&a[i]);
	}
	
/*cau 1 thay the cac so cp bang so 99*/
//	for(int i=0;i<n;i++){
//		if(cp(a[i])){
//			a[i]=99;
//		}
//		if(fibo(a[i])){
//			a[i]=0;
//		}
//	}

//***************************************************************************
/*cau 2 thay the cac so fibo bang so 0*/
//	for(int i=0;i<n;i++){
//		if(cp(a[i])){
//			a[i]=99;
//		}
//		if(fibo(a[i])){
//			a[i]=0;
//		}
//	}

//***************************************************************************
/*cau 3 thay the so truoc va sau snt t3 bang so 0*/

//	int cnt=0,pos;
//	for(int i=0;i<n;i++){
//		if(nt(a[i])){
//			cnt++;
//		}
//		if(cnt==3){
//			pos=i;
//			break;
//		}
//	}
//	for(int i=0;i<n;i++){
//		a[pos-1]=0;
//		a[pos+1]=0;
//	}

//***************************************************************************
/*cau 4 thay the so truoc va sau so cp thu 2*/
//	int cnt=0,pos;
//	for(int i=0;i<n;i++){
//		if(cp(a[i])){
//			cnt++;
//		}
//		if(cnt==2){
//			pos=i;
//			break;
//		}
//	}
//	for(int i=0;i<n;i++){
//		a[pos-1]=0;
//		a[pos+1]=0;
//	}

//***************************************************************************
/*cau 5 thay the phan tu truoc snt thu 2 bang 0*/

//	int cnt=0,pos;
//	for(int i=0;i<n;i++){
//		if(nt(a[i])){
//			cnt++;
//		}
//		if(cnt==2){
//			pos=i;
//			break;
//		}
//	}
//		a[pos-1]=0;

//***************************************************************************
/*cau 6 thay the 2 phan tu phia sau snt t2 =0*/

	int cnt=0,pos;
	for(int i=0;i<n;i++){
		if(nt(a[i])){
			cnt++;
		}
		if(cnt==2){
			pos=i;
			break;
		}
	}
	for(int i=pos+1;i<pos+3;i++){
		a[i]=0;
	}
	
//***************************************************************************


	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
