/*bai 2*/

#include<stdio.h>
#include<math.h>
#define ll long long
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		ll n;
		scanf("%lld",&n);
		if(n%11==0){
			printf("1\n");
		}
		else printf("0\n");
	}
}
