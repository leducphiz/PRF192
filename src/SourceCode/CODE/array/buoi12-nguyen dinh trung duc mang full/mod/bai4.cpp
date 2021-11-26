/*bai 4*/
#include<stdio.h>
#include<math.h>

int solve(int n, int k){
	int r=n%k;
	int s=k*(k-1)/2;
	if(r==0){
		return s*(n/k);
	}
	else return s*(n/k)+r*(r+1)/2;
}

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int n,k;
		scanf("%d%d",&n,&k);
		printf("%d\n",solve(n,k));
	}
}

//#include<stdio.h>
//#define ll long long
//int main(){
//	int t;
//	scanf("%d", &t);
//	while(t--){
//		int n;
//		ll k;
//		scanf("%d%lld", &n,&k);
//		ll sum=0;
//		for(int i=1;i<=n;i++){
//			sum+=i%k;
//		}
//		printf("%d\n", sum);
//	}
//}
