/* tong cac so nguyen to co trong mang */


//#include<stdio.h>
//#include<math.h>
//
//int nto(int n){
//	for(int i=2;i<=sqrt(n);i++){
//		if(n%i==0) return 0;
//	}
//	return n>1;
//}
//
//int main(){
//	int n;
//	scanf("%d", &n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d", &a[i]);
//	}
//	int sum=0;
//	for(int i=0;i<n;i++){
//		if(nto(a[i]))
//			sum+=a[i];
//	}
//	printf("%d", sum);
//	return 0;
//}

//-----------------------------------------------------------------------------

/* tim so lon nhat so nho nhat */

//#include<stdio.h>
//int main(){
//	int n;
//	scanf("%d", &n);
//	int a[n];
//	for(int i=0; i<n; i++){
//		scanf("%d", &a[i]);
//	}
//	int max=a[0];
//	for(int i=1;i<n;i++){
//		if(a[i]>max){
//			max=a[i];
//		}
//	}
//	printf("%d", max);
//	return 0; 
//}

//------------------------------------------------------------------------------------

/* tim vi tri dau tien cua 1 so nao do trong mang */

//#include<stdio.h>
//int main(){
//	int n;
//	scanf("%d", &n);
//	int a[n];
//	for(int i=0; i<n; i++){
//		scanf("%d", &a[i]);
//	}
//	int x, index=-1;
//	scanf("%d", &x);
//	for(int i=0; i<n; i++){
//		if(a[i]==x){
//			index=i+1;
////			printf("%d ", index);
//			break;
//		}
//	}
//	printf("%d", index); 
//	return 0;
//}

//-----------------------tim kiem tuyen tinh-------------------------------------------------------------

/* tim vi tri so cuoi cung chia het cho 2 trong mang */

#include<stdio.h>
int main (){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=n-1; i>=0;i--){
		if(a[i]%2==0){
		printf("%d", i+1);
		return 0;
		}
	}
		printf("-1");
	return 0;
}

/*kiem tra so luong byte cua mang */


