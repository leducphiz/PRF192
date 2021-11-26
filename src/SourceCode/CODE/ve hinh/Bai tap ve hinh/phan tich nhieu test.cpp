///* bai toan voi nhieu test */
//
#include<stdio.h>
#include<math.h>

void pt(int n){
	for(int i=2; i<=sqrt(n);i++){
		int dem=0;
		while(n%i==0){
			dem++;
			n/=i;
		}
		if(dem!=0){
			printf(" %d(%d)", i, dem);
		}
	}
	if (n>1) printf(" %d(1)", n);
}

int main(){
	int t;
	scanf("%d", &t);
	for(int i=1; i<=t; i++){
		int n;
		scanf("%d", &n);
		printf ("Test %d", i);
		pt(n);
		printf("\n");
	}
	return 0;
}

/*bai 52 */

//#include<stdio.h>
//#include<math.h>
//
//int daoNguoc(int n){
//	int res=0;
//	int i;
//	while(n!=0){
//		res=res*10+n%10;
//		n/=10;
//	}
//	return res;
//}
//
//void solve(int n){
//	int c2=0, c3=0,c5=0,c7=0;
//	int d=daoNguoc(n);
//	while(n){
//		int r=n%10;
//		if(r==2) c2++;
//		else if (r==3) c3++;
//		else if (r==5) c5++;
//		else if (r==7) c7++;
//		n/=10;
//	}
//	while (d){
//		int r=d%10;
//		if (r==2 && c2!=0){
//		printf("2 %d", c2);
//		c2=0;
//	}
//		else if (r==3 && c3!=0){
//		printf("\n3 %d", c3); c3=0;}
//		else if (r==5 && c5!=0) {
//		printf("\n5 %d", c5); c5=0;}
//		else if (r==7&& c7!=0) {
//		printf("\n7 %d", c7); c7=0; }
//		d/=10;
//	}
//}
//
//int main(){
//	solve(124667);
//}

 



