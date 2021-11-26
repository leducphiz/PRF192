/*dem so nguyen to theo thu tu */

#include<stdio.h>
#include<math.h>
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
void sort(int a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=1;
	}
	for(int i=0;i<n;i++){
		if(b[i]&&nt(a[i])){
			int cnt=1;
			for(int j=i+1;j<n;j++){
				if(a[j]==a[i]){
					cnt++;
					b[j]=0;
				}
			}
			printf("%d %d\n", a[i],cnt);
		}
	}
}
