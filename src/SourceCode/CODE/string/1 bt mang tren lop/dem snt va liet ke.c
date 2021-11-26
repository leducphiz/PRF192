/*bai 24 dem snt trong mang*/

#include<stdio.h>
#include<math.h>
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n],res[n];
	int b[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=1;
	}	
	int cnt=0;
	for(int i=0;i<n-1;i++){
		if(b[i]&&nt(a[i])){
			for(int j=i+1;j<n;j++){
				if(a[j]==a[i]){
					b[j]=0;
				}
			}
			res[cnt]=a[i];
			cnt++;
		}
	}
	printf("%d ", cnt);
	for(int i=0;i<cnt;i++){
		printf("%d ",res[i]);
	}
}
