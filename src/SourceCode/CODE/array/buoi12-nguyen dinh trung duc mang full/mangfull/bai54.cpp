/*bai 54 sap xep tang dan cac phan tu chan va le trong mang */

//#include<stdio.h>
//int main(){
//	int n;
//	scanf("%d", &n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d", &a[i]);
//	}
//	for(int i=0;i<n-1;i++){
//		for(int j=i+1;j<n;j++){
//			if((a[i]%2!=0 && a[j]%2==0) || (a[i]%2==0 && a[j]%2==0 && a[i]>a[j]) || (a[i]%2!=0 && a[j]%2!=0 && a[i]>a[j])){
//				int tmp=a[i];
//				a[i]=a[j];
//				a[j]=tmp;
//			}
//		}
//	}
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//}

#include<stdio.h>
void sapxep(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]){
				int tmp=a[j];
				a[j]=a[i];
				a[i]=tmp;
			}
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n],chan[n],le[n],cnt1=0,cnt2=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			chan[cnt1]=a[i];
			cnt1++;
		}
		else if(a[i]%2==1){
			le[cnt2]=a[i];
			cnt2++;
		}
	}
	sapxep(chan,cnt1);
	sapxep(le,cnt2);
	for(int i=0; i<cnt1;i++){
		printf("%d ",chan[i]);
	}
	for(int i=0;i<cnt2;i++){
		printf("%d ",le[i]);
	}
}
