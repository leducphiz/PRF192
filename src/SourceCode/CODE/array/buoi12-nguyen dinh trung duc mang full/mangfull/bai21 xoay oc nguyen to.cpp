/*bai 21 xoay oc nguyen to*/
//#include<stdio.h>
//#include<math.h>
//int nt(int n){
//	for(int i=2;i<=sqrt(n);i++){
//		if(n%i==0) return 0;
//	}
//	return n>1;
//}
//int main(){
//	int n;
//	scanf("%d", &n);
//	int a[n][n];
//	int c=n*n;
//	int b[c];
//	int dem=0;
//	for(int i=2;dem<(n*n);i++){
//		if(nt(i)==1){
//			b[dem]=i; 
//			dem++;
//		}
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

#include<stdio.h>
#include<string.h>
#include<math.h>

int prime[100001];
void sieve(){
	for(int i=1;i<=100000;i++){
		prime[i]=1;
	}
//	memset(prime,1,sizeof(prime));
	prime[0]=0;
	prime[1]=0;
	for(int i=2;i<=sqrt(100000);i++){
		if(prime[i]){
			for(int j=i*i;j<=100000;j+=i){
				prime[j]=0;
			}
		}
	}
}
int main(){
	sieve();
	int n;
	scanf("%d",&n);
	int cnt=0,k=0,a[n];
	while(cnt<n*n){
		if(prime[k]){
			a[cnt]=k;
			cnt++;
		}
		k++;
	}
	int b[n][n];
	int hang=0,cot=n-1;
	int dem=0;
	for(int j=1;j<=n/2+1;j++){
		for(int i=hang;i<=cot;i++){
			b[hang][i]=a[dem];
			dem++;
		}
		for(int i=hang+1;i<=cot;i++){
			b[i][cot]=a[dem];
			dem++;
		}
		for(int i=cot-1;i>=hang;i--){
			b[cot][i]=a[dem];
			dem++;
		}
		for(int i=cot-1;i>hang;i--){
			b[i][hang]=a[dem];
			dem++;
		}
		hang++;
		cot--;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
}

