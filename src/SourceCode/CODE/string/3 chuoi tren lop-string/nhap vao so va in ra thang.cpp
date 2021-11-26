/*bai 1 nhap vao so va in ra thang */

//#include<stdio.h>
//int main(){
//	int m;
//	printf("Input month:");
//	scanf("%d",&m);
//	switch(m){
//		case 1:
//			printf("January");
//			break;
//		case 2:
//			printf("February");
//			break;
//		case 3:
//			printf("March");
//			break;
//		case 4:
//			printf("April");
//			break;
//		case 5:
//			printf("May");
//			break;
//		case 6:
//			printf("June");
//			break;
//		case 7:
//			printf("July");
//			break;
//		case 8:
//			printf("August");
//			break;
//		case 9:
//			printf("September");
//			break;
//		case 10:
//			printf("October");
//			break;
//		case 11:
//			printf("November");
//			break;
//		case 12:
//			printf("December");
//			break;
//		default:
//			printf("Invalid month");
//			break;
//	}
//}

//#include<stdio.h>
//#include<math.h>
//int check(int n){
//	int sum=0,tmp=n,i;
//	for(i=1;i<=sqrt(n);i++){
//		if(n%i==0){
//			sum+=i;
//			if((n/i)!=i && (n/i)!=n)
//				sum+=n/i;
//		}
//	}
//	if(sum>tmp) return 1;
//	else return 0;
//}
//
//int main(){
//	int i;
//	for(i=1;i<=1000;i++){
//		if(check(i)){
//			printf("%d ",i);
//		}
//	}
//}

// C program to check whether a number can be expressed as a sum of two prime numbers
//#include <stdio.h>
//int sum_of_two_primes(int n);
//int main(){
//	int n, i;
//	printf("Enter the number: ");
//	scanf("%d", &n);
//	int flag = 0;
//	for(i = 2; i <= n/2; ++i){
//// Condition for i to be prime
//		if (sum_of_two_primes(i) == 1){
//			if (sum_of_two_primes(n-i) == 1){
//				printf("sum of %d and %d\n", i, n - i);
//				flag = 1;
//			}
//		}
//	}
//	if (flag == 0)
//		printf("%d cannot be expressed as the sum of two prime numbers\n", n);
//	return 0;
//}
//
////function to check if a number is prime or not
//int sum_of_two_primes(int n){
//	int i, isPrime = 1;
//	for(i = 2; i <= n/2; ++i){
//		if(n % i == 0){
//			isPrime = 0;
//			break;
//		}
//	}
//	return isPrime;
//}

/*chuyen doi thap phan sang bat phan */

//#include<math.h>
//#include<stdio.h>
//int oc2dec(int n){
//	int p=0;
//	int dec=0;
//	while(n>0){
//		dec+=(n%10)*pow(8,p);
//		p++;
//		n/=10;
//	}
//	return dec;
//}
//int dec2oc(int n){
//	int p=0;
//	int oc=0;
//	while(n>0){
//		oc+=(n%8)*pow(10,p);
//		p++;
//		n/=10;
//	}
//	return oc;
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	int a=oc2dec(n);
//	printf("%d",a);
//}

/*strong number */

//#include<stdio.h>
//int giaithua(int n){
//	int i,s=1;
//	for(i=1;i<=n;i++){
//		s*=i;
//	}
//	return s;
//}
//int check(int n){
//	int i,sum=0,tmp=n;
//	while(n>0){
//		sum+=giaithua(n%10);
//		n/=10;
//	}
//	if(sum==tmp) return 1;
//	return 0;
//}
//int main(){
//	int x,y,i;
//	scanf("%d%d",&x,&y);
//	for(int i=x;i<=y;i++){
//		if(check(i)){
//			printf("%d ",i);
//		}
//	}
//}

/*update mang bang tich so truoc va sau */

//#include<stdio.h>
//int main(){
//	int i,n;
//	scanf("%d",&n);
//	int a[n];
//	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	a[0]=a[0]*a[1];
//	int pre=a[0];
//	for(i=1;i<n-1;i++){
//		int cur=a[i];
//		a[i]=pre*a[i+1];
//		pre=cur;
//	}
//	a[n-1]=pre*a[n-1];
//	for(i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//}

//#include<stdio.h> 
//void newArryPrevNext(int arr1[], int n) 
//{ 
//    if (n <= 1) 
//    return; 
//    int pre_elem = arr1[0]; 
//    arr1[0] = arr1[0] * arr1[1]; 
//    for (int i=1; i<n-1; i++) 
//    { 
//        int cur_elem = arr1[i]; 
//        arr1[i] = pre_elem * arr1[i+1]; 
//        pre_elem = cur_elem; 
//    } 
//    arr1[n-1] = pre_elem * arr1[n-1]; 
//} 
//int main() 
//{
//    int arr1[] = {1,2, 3, 4, 5, 6}; 
//    int n = sizeof(arr1)/sizeof(arr1[0]); 
//	int i = 0; 
////------------- print original array ------------------	
//	printf("The given array is:  \n");
//	for(i = 0; i < n; i++)
//		{
//			printf("%d  ", arr1[i]);
//		}
//	printf("\n");
////-----------------------------------------------------------  	
//	printf("The new array is: \n");	
//    newArryPrevNext(arr1, n); 
//    for (int i=0; i<n; i++) 
//      printf("%d ", arr1[i]); 
//    return 0; 
//} 

/* sap xep lai theo tung cap thu tu */

//#include<stdio.h>
//void sort(int a[],int n){
//	int i,j;
//	for(i=0;i<n-1;i++){
//		for(j=i+1;j<n;j++){
//			if(a[j]<a[i]){
//				int tmp=a[i];
//				a[i]=a[j];
//				a[j]=tmp;
//			}
//		}
//	}
//}
//int main(){
//	int i,j,n;
//	scanf("%d",&n);
//	int a[n];
//	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	sort(a,n);
//	int l=0,r=n-1;
//	while(l<=r){
//		printf("%d %d ",a[l],a[r]);
//		l++;
//		r--;
//	}
//}

//************** LAP TRINH C CAU HOI VA BAI TAP ON TAP THEM *************************//

//A01
//#include<stdio.h>
//int main(){
//	int n;
//	scanf("%d",&n);
//	int i;
//	float sum=0;
//	for(i=1;i<=n;i++){
//		sum+=(1/(float)i);
//	}
//	printf("%.2f",sum);
//}

//******************************************************************************************
//A02
//#include<stdio.h>
//int main(){
//	int n,i,s=0,s1=0,s2=s-s1;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		s+=i;
//		if(i%2==1){
//			s1+=i;
//		}
//	}
//	s2=s-s1;
//	printf("%d %d %d",s, s1, s2);
//}

//******************************************************************************************
//A03
//#include<stdio.h>
//int main(){
//	int n,i,s=0;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		if(i%7==0){
//			s+=i;
//		}
//	}
//	printf("%d",s);
//}

//******************************************************************************************
//A04
//#include<stdio.h>
//int main(){
//	int n,i,s=0;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		if(i%7!=0){
//			s+=i;
//		}
//	}
//	printf("%d",s);
//}

//******************************************************************************************
//A05
//#include<stdio.h>
//int main(){
//	int a,b,c;
//	scanf("%d%d%d",&a,&b,&c);
//	if(a>0&&b>0&&c>0&&a+b>c&&a+c>b&&b+c>a){
//		printf("Yes");
//		return 0;
//	}
//	printf("No");
//}
//******************************************************************************************
//A08
//#include<stdio.h>
//int main(){
//	int i,n;
//	scanf("%d",&n);
//	int a[n];
//	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	int max=a[0];
//	for(i=1;i<n;i++){
//		if(a[i]>max){
//			max=a[i];
//		}
//	}
//	printf("%d",max);
//}

//******************************************************************************************
//A09

//#include <stdio.h>
//#include <math.h>
//int main ()
//{
//	float a, b, c, delta, x1, x2, x3;
//	printf ("Nhap a: ");
//	scanf ("%f", &a);
//	printf ("Nhap b: ");
//	scanf ("%f", &b);
//	printf ("Nhap c: ");
//	scanf ("%f", &c);
//	delta = b*b - 4*a*c;
//	x1 = (-b + sqrt (delta)) / (2*a);
//	x2 = (-b - sqrt (delta)) / (2*a);
//	x3 = -b / (2*a);
//	
//	
//	if (a == 0) {
//		if (b == 0)
//		{
//		if (c == 0) printf ("Pt co vo so nghiem");
//		else printf ("PT vo nghiem");
//		}
//		else printf ("Phuong trinh co 1 nghiem duy nhat la %f", -c/b);
//		}
//	else 
//	if (delta < 0) printf ("PT vo nghiem");
//	else if (delta = 0){
//	printf ("Phuong trinh co mot nghiem duy nhat %f", x3);
//	} 
//	else {
//	printf ("\n Phuong trinh co nghiem x1 la %.2f", x1);
//	printf ("\n Phuong trinh co nghiem x2 la %.2f", x2);
//		}	
//}

//******************************************************************************************
//A11

//#include<stdio.h>
//int main(){
//	int i,n;
//	scanf("%d",&n);
//	if(n==0){
//		printf("0!=1");
//		return 0;
//	}
//	int s=1;
//	if(n!=0){
//		for(i=1;i<=n;i++){
//			s*=i;
//		}
//	}
//	printf("%d! = %d",n,s);
//}

//******************************************************************************************
//A10

//#include<stdio.h>
//int main(){
//	int a,b,c,i,j;
//	for(i=1;i<20;i++){
//		for(j=1;j<33;j++){
//			int t=100-i-j;
//			if((i*5+j%3+t/3) == 100){
//				printf("%d %d %d",i,j,t);
//			}
//		}
//	}
//}
//******************************************************************************************
//A12
/*giai thuat euclid*/

//#include<stdio.h>
//int main(){
//	int a,b;
//	scanf("%d%d",&a,&b);
//	int c=a, d=b;
//    // Neu a = 0 => ucln(a,b) = b
//    // Neu b = 0 => ucln(a,b) = a
//    if (a == 0 || b == 0){
//        printf("%d", a+b);
//    }
//    while (a != b){
//        if (a > b){
//            a -= b; // a = a - b
//        }else{
//            b -= a;
//        }
//    }
//    printf("%d",b); // return a or b, boi vì lúc này a và b bang nhau
//    printf("\n%d",c*d/b);
//}
//******************************************************************************************
//A10 /*ngay thang nam gio phut giay */

//#include <stdio.h>
//int main (){
//	int n,nam,thang,ngay, gio, phut, giay;
//	scanf ("%d", &n);
//	nam = n/31536000;
//	n-= 31536000*nam;
//	gio = n/3600;
//	phut = (n - gio*3600) / 60;
//	giay = (n- gio*3600) % 60;
//	printf ("%d gio %d phut %d giay", gio, phut, giay);
//	return 0;
//}
/***** cach cua duong ******////
//#include <stdio.h>
//int main() {
//	int T;
//	scanf("%d",&T);
//	while(T--){
//	int a[2][9] = {{500, 200, 100, 50, 20, 10, 5, 2, 1}, {0, 0, 0, 0, 0, 0, 0, 0, 0}};
//	int n, i = 0;
//	scanf("%d", &n);
//	while (n != 0) {
//		a[1][i] = n / a[0][i];
//		n %= a[0][i];
//		i++;
//	}
//	int cnt=0;
//	for (i = 0; i < 9; i++) {
//		if (a[1][i] > 0) {
//			cnt+=a[1][i];
//			printf("So to %d,000VND la: %d\n", a[0][i], a[1][i]);
//		}
//	}
//	printf("%d\n",cnt);
//	}
//}

/*A14 ma tran chuyen vi */
//#include<stdio.h>
//int main(){
//	int n,m,i,j;
//	scanf("%d%d",&n,&m);
//	int a[n][m],b[m][n];
//	for( i=0;i<n;i++){
//		for( j=0;j<m;j++){
//			scanf("%d",&a[i][j]);
//			b[j][i]=a[i][j];
//		}
//	}
//	printf("\n");
//	for( i=0;i<n;i++){
//		for(j=0;j<m;j++){
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	for(i=0;i<m;i++){
//		for(j=0;j<n;j++){
//			printf("%d ",b[i][j]);
//		}
//		printf("\n");
//	}
//}

/*A15 tinh tich 2 ma tran cac so thuc */

//#include<stdio.h>
//int main(){
//	int i,j,m,n,k,q;
//	scanf("%d%d%d",&m,&n,&k);
//	int a[m][n], b[n][k],c[m][k];
//	for(i=0;i<m;i++){
//		for(j=0;j<n;j++){
//			scanf("%d",&a[i][j]);
//		}
//	}
//	for(i=0;i<n;i++){
//		for(j=0;j<k;j++){
//			scanf("%d",&b[i][j]);
//		}
//	}
//	for(i=0;i<m;i++){
//		for(j=0;j<k;j++){
//			c[i][j]=0;
//			for(q=0;q<n;q++){
//				c[i][j]+=a[i][q]*b[q][j];
//			}
//		}
//	}
//	for(i=0;i<m;i++){
//		for(j=0;j<k;j++){
//			printf("%d ",c[i][j]);
//		}
//		printf("\n");
//	}
//}
/*chuyen chu hoa thanh chu thuong va nguoc lai */

//#include <stdio.h>
//#include<string.h>
//int main(){
//	char c[1000];
//	gets(c);
//	for(int i = 0; i < strlen(c); i++){
//		if(c[i] >= 'A' && c[i] <= 'Z')
//			c[i] = c[i] + 32;
//		else if(c[i] >= 'a' && c[i] < 'z')
//			c[i] = c[i] - 32;
//	}
//	for(int i = 0; i < strlen(c); i++){
//		printf("%c", c[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main(){
//	char c[1000];
//	gets(c);
//	int cnt=0;
//	for(int i=0;i<strlen(c);i++){
//    	if(c[i]>='a'&&c[i]<='z')
//        cnt++;
//	}
//   printf("%d",cnt);
//}
//#include<stdio.h>
//#include<string.h>
//int main(){
//	int n;
//	scanf("%d",&n);
//	getchar();
//	char c[1000];
//	gets(c);
//	printf("%s",c);
//}

/*A16 dem so lan xuat hien cua x trong day tren */

//#include<stdio.h>
//int main(){
//	int n,i,x;
//	scanf("%d",&n);
//	int a[100];
//	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	scanf("%d",&x);
//	int cnt=0;
//	for(i=0;i<n;i++){
//		if(a[i]==x){
//			cnt++;
//		}
//	}
//	printf("%d",cnt);
//}

/*A17 tim so be nhat va vi tri cua no */

//#include<stdio.h>
//int main(){
//	int n;
//	scanf("%d",&n);
//	int a[100];
//	int i;
//	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	int min=a[0],pos;
//	for(i=1;i<n;i++){
//		if(a[i]<min){
//			min=a[i];
//			pos=i;
//		}
//	}
//	printf("%d %d",min,pos+1);
//}

// liet ke cac uoc so cua no va co bao nhieu uoc 

//#include<stdio.h>
//#include<math.h>
//int main(){
//	int n;
//	scanf("%d",&n);
//	int i,cnt=0;
//	for(i=1;i<=sqrt(n);i++){
//		if(n%i==0){
//			printf("%d ",i);
//			cnt++;
//			if(n/i!=sqrt(n)){
//				printf("%d ",n/i);
//				cnt++;
//			}
//		}
//	}
//	printf("\n%d ",cnt);
//}

/*kiem tra co phai so nguyen to cung nhau khong */
//#include<stdio.h>
//int gcd(int a, int b){
//	if(a==0||b==0){
//		return a+b;
//	}
//	while(a!=b){
//		if(a>b) a-=b;
//		else b-=a;
//	}
//	return b;
//}
//int main(){
//	int a,b;
//	scanf("%d%d",&a,&b);
//	if(gcd(a,b)==1){
//		printf("Yes");
//	}
//	else printf("No");
//}

/*dec2bin*/
//#include<stdio.h>
//#include<math.h>
//long long dec2bin(int dec){
//	int p=0;
//	long long bin=0;
//	while(dec>0){
//		bin+=(dec%2)*pow(10,p);
//		p++;
//		dec/=2;
//	}
//	return bin;
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	printf("%d",dec2bin(n));
//}


