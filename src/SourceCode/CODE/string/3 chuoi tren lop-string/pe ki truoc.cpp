/*bai 1 check*/
//#include<stdio.h>
//int main(){
//	float a,b;
//	scanf("%f%f",&a,&b);
//	if(a>b){
//		printf("float a>b");
//	}
//	else{
//		printf("float a<=b");
//	}
//}
/*bai 2*/
//#include<stdio.h>
//int main(){
//	int n;
//	scanf("%d",&n);
//	int i,s=1;
//	for(i=2;i<=n/2;i++){
//		if(i%2==0){
//			s*=i;
//		}
//	}
//	printf("%d",s);
//}

/*bai 3*/

//#include<stdio.h>
//int main(){
//	float a[5];
//	for(int i=0;i<5;i++){
//		scanf("%f",&a[i]);
//	}
//	for(int i=0;i<4;i++){
//		for(int j=i;j<5;j++){
//			if(a[j]>a[i]){
//				float tmp=a[j];
//				a[j]=a[i];
//				a[i]=tmp;
//			}
//		}
//	}
//	for(int i=0;i<5;i++){
//		if(i==4) printf("%f",a[4]);
//		else printf("%f ",a[i]);
//	}
//}

/*bai 4*/

//#include<stdio.h>
//int main(){
//	int n;
//	scanf("%d",&n);
//	for(int i=0;i<n;i++){
//		for(int j=0;j<i;j++){
//			printf(" ");
//		}
//		for(int j=n;j>i;j--){
//			printf("*");
//		}
//		printf("\n");
//	}
//}

/*bai 5*/
//#include<stdio.h>
//int main(){
//	int n;
//	scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	int sum=0;
//	for(int i=0;i<n;i++){
//		if(a[i]%2==0){
//			sum+=a[i]*a[i];
//		}
//	}
//	printf("%d",sum);
//}
//#include<stdio.h>
//#include<conio.h>
//void ChuyenHe(int x, int he)
//{
//	if (he == 16)
//	{
//		int bien_phu = 0;
//		int phantu = 0;
//		char mang[100];
//		int a = x;
//		while (a != 0)
//		{
//			int chuso = a % 16;
//			if (chuso <= 9)
//				mang[phantu++] = chuso+48;
//			else if (chuso == 10)
//				mang[phantu++] = 'A';
//			else if (chuso == 11)
//				mang[phantu++] = 'B';
//			else if (chuso == 12)
//				mang[phantu++] = 'C';
//			else if (chuso == 13)
//				mang[phantu++] = 'D';
//			else if (chuso == 14)
//				mang[phantu++] = 'E';
//			else if (chuso == 15)
//				mang[phantu++] = 'F';
//			bien_phu++;
//			a /= 16;
//		}
//		printf("\nKetqua = ");
//		for (int i = bien_phu - 1; i >= 0; i--)
//		{
//			printf("%c",mang[i]);
//		}
//	}
//	else
//		printf("\nChuong trinh khong ho tro he co so nay\n");
//}
//int main()
//{
//	int x, he;
//	printf("\nNhap vao he so: ");
//	scanf("%d", &he);
//	printf("\nNhap gia tri can doi: ");
//	scanf("%d", &x);
//	ChuyenHe(x, he);
//	return 0;
//}


/*bai 6 swap phan tu giong nhau */

// vd input i love you ; output: i evol you 
//#include<stdio.h>
//#include<string.h>
//int main ()
//{
//    char s[100],s1[100],a[100][100];
//    gets(s);
//    int n=0;
//    char *t=strtok(s," ");
//    while (t!=NULL){
//        strcpy(a[n],t);
//        n++;
//        t=strtok(NULL," ");
//    }
//    gets(s1);
//    for (int i=0;i<n;i++){
//        if (strcmp(a[i],s1)==0){
//            strrev(a[i]);
//            break;
//        }
//    }
//    for (int i=0;i<n;i++){
//        printf("%s ",a[i]);
//    }
//    return 0;
//}

/*bai 8 bang ma ascii*/

//#include <stdio.h>
//int main ()
//{
//	char c;
//	printf ("\nNhap ki tu c: ", &c); scanf ("%c", &c);
//	printf ("\ngia tri cua c la: %c", c);
//	printf ("\ngia tri cua c la: %d", c);
//	printf ("\nc co la ki tu a khong? %d", (c==97));
//}

/*bai 9 tinh tong cac chu so cua no*/

//#include<stdio.h>
//int main(){
//	int n;
//	scanf("%d",&n);
//	int sum=0;
//	while(n>0){
//		sum+=n%10;
//		n/=10;
//	}
//	printf("%d",sum);
//}

/*bbai 10 check prime*/
//#include<stdio.h>
//#include<math.h>
//int main(){
//	int n;
//	scanf("%d",&n);
//	if(n<=1){
//		printf("not prime");
//		return 0;
//	}
//	for(int i=2;i<=sqrt(n);i++){
//		if(n%i==0) printf("not prime");
//		return 0;
//	}
//	printf("prime");
//}

/*bai 7 so co 2 chu so xuat hien nhieu nhat */

//#include<stdio.h>
//int dem(int n){
//	int cnt=0;
//	while(n>0){
//		n/=10;
//		cnt++;
//	}
//	if(cnt==2) return 1;
//	return 0;
//}
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	int a[n],b[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//		b[i]=1;
//	}
//	for(int i=0;i<n;i++){
//		if(dem(a[i])==0){
//			printf("no");
//			return 0;
//		}
//	}
//	int max=-1e9,x;
//	for(int i=0;i<n-1;i++){
//		int cnt=1;
//		if(dem(a[i])==1 &&b[i]==1){
//			for(int j=i+1;j<n;j++){
//				if(a[j]==a[i]){
//					cnt++;
//					b[j]=0;
//				}
//				if(cnt>max){
//					max=cnt;
//					x=a[i];
//				}
//			}
//		}
//	}
//	printf("%d",x);
//}
