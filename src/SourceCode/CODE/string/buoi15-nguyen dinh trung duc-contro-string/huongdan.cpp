/*con tro*/
//#include<stdio.h>
//#include<string.h>
//int main(){
//	int a;
//	a=100;
//	int *p; //*p la khai bao con tro p.
//	p=&a; //&a la dia chi cua bien a; lay dia chi cua a gan cho bien p; p tro den a; 
////	printf("dia chi cua bien a la %d \n",&a);
////	printf("gia tri cua con tro p la %d", p); // gia tri p luc nay la vi tri cua a;
//	printf("gia tri cua bien a la %d\n ",a);
//	printf("gia tri cua bien ma con tro p dang tro toi %d\n ",*p); /*toan tu giai tham chieu , xem p
//	dang tro toi bien gia tri la bao nhieu*/
//	// %a <=> p ; a <=> *p; 
//	printf("dia chi con tro p la %d",&p);
//}

//#include<stdio.h>
//int main(){
//	int a;
//	a=100;
//	int *p;
//	p=&a;
//	*p=1000;
//	printf("%d",a);
//}

//#include<stdio.h>
//void swap(int *a,int *b){
//	int tmp=*a; // gan gia tri ma con tro a dang tro toi cho tmp;
//	*a=*b;
//	*b=tmp;
//}
//int main(){
//	int m,n;
//	scanf("%d %d",&m,&n); // lay gia tri tu dia chi , nhap tu ban phim. 
//	swap(&m,&n); // '&' la dia chi, phai truyen dia chi thi moi tro duoc
//	printf("%d %d",m,n);
//}

//#include<stdio.h>
//int main(){
//	int a=100;
//	int *p1,*p2;
//	p1=&a;
//	p2=p1;
//	printf("%d",*p2);
//}

// con tro NULL la con tro k tro di dau ca
//#include<stdio.h>
//int main(){
//	int a=100;
//	int *p1,*p2;
//	if(p1==NULL){
//		printf("Yes");
//	}
//	else printf("No");
//}
//#include<stdio.h>
//#include<string.h>
////char *strlwr(char c[])
////char *strlwr(char *source)
//int main(){
//	char c[100];
//	gets(c);
//	strlwr(c);
//	printf("%s",c);
//}
/* cac ham trong string */
//isupper(char c) kiem tra xem ki tu co phai chu hoa hay khong, 1 ki tu, tra ve 1 va 0

//#include<stdio.h>
//#include<ctype.h>
//int main(){
//	char c;
//	scanf("%c",&c);
//	if(isupper(c)){
//		printf("yah");
//	}
//	else printf("Nope");
//}

//******************************************************************************************
//islower(char c) kiem tra xem ki tu co phai chu thuong hay khong, 1 ki tu, tra ve 1 va 0
//#include<stdio.h>
//#include<ctype.h>
//int main(){
//	char var1={'A'};
//	char var2={'a'};
//	char var3={0};
//	if(islower(var2)){
//		printf("Yah");
//	}
//	else printf("Nope");
//}

//******************************************************************************************
//isdigit(char c) kiem tra xem ki tu co phai ki tu so khong, 1 ki tu, tra ve 1 va 0
//isalpha(char c) kiem tra xem ki tu co phai ki tu chu khong, 1 ki tu, tra ve 1 va 0
//#include<stdio.h>
//#include<ctype.h>
//int main(){
//	char var1={'a'};
//	char var2={'1'};
//	if(isdigit(var2)){
//		printf("Olala\n");
//	}
//	else printf("Nah\n");
//	if(isalpha(var1)){
//		printf("What");
//	}
//	else printf("No");
//}

//******************************************************************************************
// char tolower(char c) chuyen ki tu thanh  dang in hoa
// char upper
//#include<stdio.h>
//#include<ctype.h>
//int main(){
//	char c;
//	scanf("%c",&c);
//	char a=tolower(c);
//	printf("%c",a);
//}

//******************************************************************************************
//int strcmp(char c1[], char c2[]) (c1>c2 tra ve 1, c1<c2 tra ve -1, c1==c2 tra ve 0)
// int stricmp ( chu hoa voi chu thuong nhu nhau)
//#include<stdio.h>
//#include<string.h>
//int main(){
//	char c1[100], c2[100];
//	gets(c1);
//	gets(c2);
//	if (strcmp(c1,c2)==0){
//		printf("Yes");
//	}
//	else printf("No");
//}

//******************************************************************************************
// strcpy(char dich[], char goc[]) copy chuoi goc vao chuoi dich, xoa chuoi dich di roi chen len

//#include<stdio.h>
//#include<string.h>
//int main(){
//	char c1[100],c2[100];
//	gets(c1);
//	gets(c2);
//	strcpy(c1,c2);
//	printf("%s",c1);
//}

//******************************************************************************************
// strcat(char dich[], char goc[]) noi chuoi goc vao chuoi dich,khong xoa chuoi dich di roi chen len
// co the them so ki tu muon noi 
//#include<stdio.h>
//#include<string.h>
//int main(){
//	char c1[100],c2[100];
//	gets(c1);
//	gets(c2);
//	strcat(c1,c2);
//	printf("%s",c1);
//}

//******************************************************************************************
// strtok (tokenize) tach cac tu. tra ve 1 con tro char
#include<stdio.h>
#include<string.h>
int main(){
	char c[1000];
	gets(c);
	char *token=strtok(c," ");
	while(token!=NULL){
		printf("%s ",token);
		token=strtok(NULL," ");
	}
}
