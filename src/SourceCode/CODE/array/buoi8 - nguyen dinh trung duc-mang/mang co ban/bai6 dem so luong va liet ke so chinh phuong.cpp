/* bai 6 dem so luong va liet ke so chinh phuong trong mang */
#include<stdio.h>
#include<math.h>

void nhapMang(int a[], int n){
	for(int i=0; i<n;i++){
		scanf("%d", &a[i]);
	}
}

int chinhPhuong (long long n){
	long long r=sqrt(n);
	if(1LL*r*r==n) return n>0;
	else return 0;
}
void dem(int a[], int n){
	int count=0;
	for(int i=0; i<n; i++){
		if(chinhPhuong(a[i])) count++;
	}
	printf("%d\n", count);
}

void lietKe(int a[], int n){
	for(int i=0; i<n;i++){
		if(chinhPhuong(a[i])) 
		printf("%d ", a[i]);
	}
}

//int main(){
//	int n;
//	scanf("%d", &n);
//	int a[n];
//	nhapMang(a,n);
//	dem(a,n);
//	lietKe(a,n);
//}

int main(){
	int n,cnt=0;
	scanf("%d", &n);
	long long a[n], b[n];
	for(int i=0;i<n;i++){
		scanf("%lld", &a[i]);
		if(chinhPhuong(a[i])){
			b[cnt]=a[i];
			cnt++;
		}
	}
	printf("%d\n", cnt);
	for(int i=0;i<cnt;i++){
		printf("%d ", b[i]);
	}
}
