#include<stdio.h>
#include<math.h>
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
void chen(int a[], int n, int pos, int x){
	for(int i=n;i>pos;i--){
		a[i]=a[i-1];
	}
	a[pos]=x;
	++n;
}

void xoa(int a[], int n, int pos){
    for(int i=pos;i<n-1;i++){
    	a[i]=a[i+1];
	}
	--n;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
//	-------------------------------------------------------	
	/*them so 0 vao truoc 2 don vi doi voi phan tu chan thu 3 */
//	int cnt=0;
//	int pos;
//	for(int i=0;i<n;i++){
//		if(a[i]%2==0){
//			cnt++;
//		}
//		if(cnt==3){
//			pos=i;
//			break;
//		}
//	}
//	chen(a,n,pos-2,0);
//	n++;
//	for(int i=0;i<n;i++){
//		printf("%d ", a[i]);
//	}
//	-------------------------------------------------------
	/*xoa bo phan tu chan thu 2*/	
//	int pos;
//	int cnt=0;
//	for(int i=0;i<n;i++){
//		if(a[i]%2==0){
//			cnt++;
//		}
//		if(cnt==2){
//			pos=i;
//			break;
//		}
//	}
//	xoa(a,n,pos);
//	n--;
//	for(int i=0;i<n;i++){
//		printf("%d ", a[i]);
//	}
//	-------------------------------------------------------
	/*xoa bo 2 phan tu dung sau phan tu chan thu 2*/
//	int pos;
//	int cnt=0;
//	for(int i=0;i<n;i++){
//		if(a[i]%2==0){
//			cnt++;
//		}
//		if(cnt==2){
//			pos=i;
//			break;
//		}
//	}
//	xoa(a,n,pos+1);
//	xoa(a,n,pos+1);
//	n-=2;
//	for(int i=0;i<n;i++){
//		printf("%d ", a[i]);
//	}

//	-------------------------------------------------------
	/*thay snt thu 2 tinh tu duoi len bang binh phuong cua no*/
//	int cnt=0;
//	int pos,k;
//	k=3;
//	for(int i=n-1;i>=0;i--){
//		if(nt(a[i])){
//			cnt++;
//		}
//		if(cnt==2){
//			pos=i;
////			a[i]=a[i]*a[i];
//			break; 
//		}
//	}
//	for(int i=0;i<n;i++){
//		if(i==pos-k){
//			a[i]=a[i]*a[i];
//		}
//	}
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}

//	-------------------------------------------------------
	/*xoa phan tu snt dau tien*/
//	for(int i=0;i<n;i++){
//		if(nt(a[i])){
//			xoa(a,n,i);
//			n--;
//			break;
//		}
//	}
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}

//	-------------------------------------------------------
	/*xoa tat ca cac snt*/
//	for(int i=0;i<n;i++){
//		if(nt(a[i])==1){
//			xoa(a,n,i);
//			n--;
//			i--;
//		}
//	}
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}

//	-------------------------------------------------------
	/*xoa 3 phan tu co gia tri la snt*/
//	int cnt=0;
//	for(int i=0;i<n;i++){
//		if(nt(a[i])){
//			cnt++;
//			xoa(a,n,i);
//			n--;
//			i--;
//		}
//		if(cnt==3){
//			break;
//		}
//	}
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
}
