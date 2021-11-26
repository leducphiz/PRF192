/*bai 6 tim so nguyen nho nhat chia het cho tu 1 toi n*/
/*cach lam thuong*/
//#include<stdio.h>
//#include<math.h>
//
//int gcd(int a,int b){
//	while(b){
//		int tmp=a%b;
//		a=b;
//		b=tmp;
//	}
//	return a;
//}
//
//int lcm(int a,int b){
//	return a*b/gcd(a,b);
//}
//
//int main(){
//	int T;
//	scanf("%d",&T);
//	while(T--){
//		int n;
//		scanf("%d",&n);
//		int res=1;
//		for(int i=2;i<=n;i++){
//			res=lcm(res,i);
//		}
//		printf("%d\n",res);
//	}
//	return 0;
//}
/* 16 la 720720*/

/*cach lam hay hon */

#include<stdio.h>
#include<math.h>

int prime[10001];
void sieve(){
	for(int i=1;i<=10000;i++){
		prime[i]=1;
	}
	prime[0]=0;
	prime[1]=0;
	for(int i=2;i<=sqrt(10000);i++){
		if(prime[i]){
			for(int j=i*i;j<=10000;j+=i){
				prime[j]=0;
			}
		}
	}
}

int main(){
	sieve();
	int T;
	scanf("%d",&T);
	while(T--){
		int n;
		scanf("%d",&n);
		long long sum=1;
		for(int i=2;i<=n;i++){
			if(prime[i]){
				long long res=1;
				while(res<n){
					res*=i;
				}
			if(res>n) res/=i;
			sum*=res;
			}
		}
	printf("%lld\n",sum);
	}
}

