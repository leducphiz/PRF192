/* bai 8 dem so luong so nguyen to cung nhau voi x */

#include<stdio.h>

int ntCungNhau(int a, int b){
	while (a*b != 0){ 
        if (a > b){
            a %= b; 
        }else{
            b %= a;
        }
    }
    if(a+b==1) return 1;
	return 0;
}

void lietKe(int a[], int &x){
	int n;
	for(int i=0;i<n;i++){
		if(ntCungNhau(a[i],x)) printf("%d ", a[i]);
	}
}
int main(){
	int n,cnt=0;
	scanf("%d", &n);
	int a[n],b[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int x; scanf("%d", &x);
	for(int i=0;i<n;i++){
		if(ntCungNhau(a[i],x)) {
		b[cnt]=a[i];
		cnt++;
		}
	}
	printf("%d\n", cnt);
	for(int i=0;i<cnt;i++){
		printf("%d ", b[i]);
	}
//	lietKe(a,x);
}
