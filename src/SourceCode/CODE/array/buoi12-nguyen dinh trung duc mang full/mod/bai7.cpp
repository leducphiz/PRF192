#include<stdio.h>
#include<math.h>
#include<string.h>
long long f[93];
void init(){
	f[0]=0;
	f[1]=1;
	for(int i=2;i<93;i++){
		f[i]=f[i-1]+f[i-2];
	}
}
int fibo(long long n){
	for(int i=0;i<93;i++){
		if(f[i]==n)
		{
			return 1;
		}
	}
	return 0;
}

int main(){
	init();
	int T;
	scanf("%d",&T);
	while(T--){
		long long n;
		scanf("%lld",&n);
		if(fibo(n)){
			printf("Yes\n");
		}
		else printf("No\n");
	}
	return 0;
}

///*string*/
//#include<stdio.h>
//#include<string.h>
////int main(){
////	char monhoc[50];
//////	printf("%s",monhoc); // khong xuong dong
//////	puts(monhoc); // xuong dong
////	printf("Nhap ten mon hoc:");
//////	scanf("%s",monhoc); /*dung khi viet lien*/
//////	printf("Mon phai hoc la: %s",monhoc);
//////	gets(monhoc); /*de gay tran bo nho*/
////	fgets(monhoc, sizeof monhoc, stdin);
//////	printf("Mon phai hoc la: %s",monhoc);
////	printf("Mon phai hoc la:");
////	puts(monhoc); /*se xuong 1 dong o cuoi*/
////}
//int main(){
////    int age;
////    char name[30];
////    printf("Nhap tuoi: "); scanf("%d", &age);
////    getchar(); // doc ký tu '\n' neu khong se bao loi
////    printf("Nhap ten: "); 
////		fgets(name, sizeof name, stdin);
////    printf("%s-%d", name, age);
//
////********************Ham strlen ************** Ham strlen***********Do dai****************
////	printf("Chieu dai cua ten la: %d",strlen(name)-1);
//	
////********************Ham strcmp ************** Ham strcmp***********So sanh****************
//
////	char a[]="Duc";
////	char b[]="Duc";
////	int kq=strcmp(a,b);
////	printf("%d",kq); 
//	/*Tra ve "-" neu ki tu dau nho hon, khong bang nhau. Tra ve 0 neu bang nhau. Tra ve "+" neu 
//	ki tu dau lon hon, khong bang nhau */
//
////********************Ham strcat ************** Ham strcat***********Noi chuoi****************
////	char a[]="Duc dep trai";
////	char b[]=" La so mot!!";
//////	strcat(a,"");
////	strcat(a,b);
////	printf("Su that la: %s",a);
//
////	char  ch [10] = { 'H' ,  'e' ,  'l' ,  'l' ,  'o' ,  '\0' };
////    char  ch2 [10] = { 'C' ,  '\0' };
////    strcat (ch, ch2);
////    printf ( "Gia tri cua chuoi dau tien la: %s", ch);
////----------------------------------------------------------------
////	char str[80];
////	strcpy (str,"Lap ");
////	strcat (str,"trinh ");
////	strcat (str,"khong ");
////	strcat (str,"kho!");
////	puts (str);
//	
////********************Ham strcpy ************** Ham strcpy***********copy chuoi****************
////	char str1[]="Trung Duc dep trai!";
////	char str2[40];
////	char str3[40];
////	strcpy(str2,str1);
////	strcpy(str3, "Bat Tu");
////	printf("str1: %s\nstr2: %s\nstr3: %s",str1, str2,str3);
//	
////********************Ham strlwr ************** Ham strupr***********copy chuoi****************
////	char str1[]="Trung Duc dep trai!";
////	printf("%s\n", strupr(str1));
////	printf("%s", strlwr(str1));
//
////********************Ham strrev ************** Ham strrev***********dao nguoc chuoi****************
////	char name[]="Trung Duc dep trai!";
////	printf("Xuoi: %s\n",name);
////	printf("Nguoc: %s",strrev(name));
//
////********************Ham strchr ************** Ham strchr***********dao nguoc chuoi****************
//
//}
