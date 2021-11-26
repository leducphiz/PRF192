/*bai 584A */

//#include<stdio.h>
//#include<math.h>
//
//int min(int n){
//	
//}
//int main (){
//	int t;
//	long long i;
//	long long n;
//	scanf("%lld%d",&n, &t);
//	long long a=pow(10, n-1);
//	long long b=pow(10, n);
//		for(i=a;i<b;i++){
//		if(i%t==0){
//			printf("%lld ", i);
//			break;
//		if(i%t!=0) printf("-1");
//		} 
//	}
//	return 0;
//}

#include<stdio.h>
#include<math.h>
int main(){
	int n,t;
	scanf("%d %d",&n,&t);
	if(t==10) {
		if(n==1) printf("-1");
		else {
			printf("1");
			for(int i=1;i<n;i++) printf("0");
		}
	}
	else {
		for(int i=1;i<=n;i++){
			printf("%d",t);
		}
	}
	return 0;
	
}
