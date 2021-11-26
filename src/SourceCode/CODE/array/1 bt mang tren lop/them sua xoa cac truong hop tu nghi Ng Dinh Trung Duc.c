/* bai tap them sua xoa*/

#include<stdio.h>
#include<math.h>
int dem (int i){
	int count = 0;
	while (i>0){
		i/=10;
		count++;
	}
	return count;
}
int armstrong (int i){
	int a =dem(i);
	int temp=i;
	int so;
	int sum =0;
	while (i>0){
		so=i%10;
		i/=10;
		sum += pow(so,a);
	}
	if (temp==sum) return 1;
	return 0;
}

int chan(int n){
	if(n%2!=0) return 0;
	return 1;
}

int le(int n){
	if(n%2==0) return 0;
	return 1;
}
int fibo(int n){
	if(n==0||n==1||n==2) return 1;
	int fib1=1,fib2=1,fib=2;
	while(fib1+fib2<=n){
		fib=fib1+fib2;
		fib1=fib2;
		fib2=fib;
	}
	if(fib==n){
		return 1;
	}
	return 0;
}

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
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
		printf("Phan tu a[%d] la:",i);
		scanf("%d", &a[i]);
	}
	//******************************************************************************
	/*bt tong quat them 1 so cach k gia tri so voi so yeu cau*/
	int k;
	printf("Nhap khoang cach:");
	scanf("%d",&k);
	int m;
	printf("So nguyen to thu tu duoi len:");
	scanf("%d",&m);
	int pos,so,cnt=0;
	/*xac dinh vi tri can xoa, them, sua */
	for(int i=n-1;i>=0;i--){
		if(nt(a[i])){ /* thay thanh so fibo, so chan, le, armstrong thi tuy */
			cnt++;
		}
		if(cnt==m){
			pos=i;
			so=i;
			break;
		}
	}
	pos-=k; /* cai nay la them hoac xoa phia truoc, con phia sau thi += */
	
			/* ham chinh bat dau tu day */

//*********************************************************
/* sua 1 so bang binh phuong tai vi tri do*/

//	for(int i=0;i<n;i++){
//		if(i==pos){
//			a[pos]=a[i]*a[i];
//		}
//	}

//*********************************************************
//	printf("xoa may ky tu: ");
//	int s;
//	scanf("%d",&s); /*muon xoa hoac chen s so*/
//	for(int i=0;i<s;i++){
//	xoa(a,n,pos-i); /*neu muon xoa*/
//	--n; 
//	}

//*********************************************************

	printf("chen may ky tu: ");
	int s;
	scanf("%d",&s);
	for(int i=0;i<s;i++){
	chen(a,n,pos,a[so]); /*neu muon chen*/ 
	so++; /*chen chinh so tai vi tri da duoc danh dau la "so" tu ban dau */
	++n;
	}
	
//*********************************************************
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
