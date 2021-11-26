/*bai 49 xoay oc fibonacci*/

//#include<stdio.h>
//#include<math.h>
//
//int fibo(int n)
//{
//    if(n==0) return 0;
//    else if(n==1) return 1;
//    return fibo(n-1)+fibo(n-2);
//}
//
//int main(){
//	int n;
//	scanf("%d", &n);
//	int a[n][n];
//	int c=n*n;
//	int b[c];
//	for(int i=0;i<=c;i++){
//		b[i]=fibo(i);
//	}
//	int hang=0,cot=n-1;
//	int cnt=0;
//	for(int j=1;j<=n/2+1;j++){
//		for(int i=hang;i<=cot;i++){
//			a[hang][i]=b[cnt];
//			cnt++;
//		}
//		for(int i=hang+1;i<=cot;i++){
//			a[i][cot]=b[cnt];
//			cnt++;
//		}
//		for(int i=cot-1;i>=hang;i--){
//			a[cot][i]=b[cnt];
//			cnt++;
//		}
//		for(int i=cot-1;i>hang;i--){
//			a[i][hang]=b[cnt];
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

//#include<stdio.h>
//#define ll long long 
//int fibo[93];
//void init(){
//	fibo[0]=0;
//	fibo[1]=1;
//	for(int i=2;i<93;i++){
//		fibo[i]=fibo[i-2]+fibo[i-1];
//	}
//}
//
//int main(){
//	init();
//	int n;
//	scanf("%d",&n);
//	long long a[n][n];
//	int hang=0,cot=n-1,cnt=0;
//	for(int j=1;j<=n/2+1;j++){
//		for(int i=hang;i<=cot;i++){
//			a[hang][i]=fibo[cnt];
//			cnt++;
//		}
//		for(int i=hang+1;i<=cot;i++){
//			a[i][cot]=fibo[cnt];
//			cnt++;
//		}
//		for(int i=cot-1;i>=hang;i--){
//			a[cot][i]=fibo[cnt];
//			cnt++;
//		}
//		for(int i=cot-1;i>hang;i--){
//			a[i][hang]=fibo[cnt];
//			cnt++;
//		}
//		hang++;
//		cot--;
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			printf("%lld ",a[i][j]);
//		}
//		printf("\n");
//	}
//}

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	float sum=0;
	for(int i=1;i<=n;i++){
		sum+=1/(float)i;
	}
	printf("%f",sum);
}
