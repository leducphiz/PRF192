/*mau string */

//#include<stdio.h>
//#include<string.h>
//int main(){
//	char c[1000];
//	gets(c);
//	int len=0;
//	for(int i=0;c[i]!='\0';i++){
//		len++;
//	}
//	printf("%d",len);
//	return 0;
//}

/*dem so ki tu, chu cai, so*/
//#include<stdio.h>
//#include<string.h>
//int main(){
//	char c[1000];
//	gets(c);
//	int chucai=0,so=0,kitu=0;
//	for(int i=0;i<strlen(c);i++){
//		if(c[i]>='a'&&c[i]<='z' || c[i]>='A'&&c[i]<='Z'){
//			chucai++;
//		}
//		else if(c[i]>='0'&&c[i]<='9'){
//			so++;
//		}
//		else kitu++;
//	}
//	printf("%d %d %d",chucai,so,kitu);
//}

/*chu hoa thanh chu thuong va nguoc lai*/
//#include<stdio.h>
//#include<string.h>
//int main(){
//	char c[1000];
//	gets(c);
//	for(int i=0;i<strlen(c);i++){
//		if(c[i]>='a'&&c[i]<='z'){
//			c[i]-=32;
//		}
//		else if (c[i]>='A'&&c[i]<='Z'){
//			c[i]+=32;
//		}
//	}
//	printf("%s",c);
//}

/*dem chu hoa va chu thuong */

//#include<stdio.h>
//#include<string.h>
//int main(){
//	int i,cnt1=0,cnt2=0;
//	char c[1000];
//	gets(c);
//	for(i=0;i<strlen(c);i++){
//		if(c[i]>='a'&&c[i]<='z'){
//			cnt1++;
//		}
//		else if(c[i]>='A'&&c[i]<='Z'){
//			cnt2++;
//		}
//	}
//	printf("%d %d",cnt1,cnt2);
//}

/*tong cua chuoi so */

//#include<stdio.h>
//#include<string.h>
//int main(){
//	char c[1001];
//	scanf("%s",c);
//	int sum=0;
//	for(int i=0;i<strlen(c);i++){
//		sum+=c[i]-'0';
//	}
//	printf("%d", sum);
//}

/*chuoi pangram*/

//#include<stdio.h>
//#include<string.h>
//int main(){
//	int a[26]={0};
//	char c[1000];
//	scanf("%s",c);
//	for(int i=0;i<strlen(c);i++){
//		if(c[i]>='A'&&c[i]<='Z')
//			c[i]+=32;
//	}
//	for(int i=0;i<strlen(c);i++){
//		a[c[i]-'a']=1;
//	}
//	int cnt=0;
//	for(int i=0;i<26;i++){
//		if(a[i]==1){
//			cnt++;
//		}
//	}
//	if(cnt==26){
//		printf("1");
//	}
//	else printf("-1");
//}

//#include<stdio.h>
//#include<string.h>
//
//char toLower(char c){
//	if(c>='A'&&c<='Z'){
//		c+=32;
//	}
//	return c;
//}
//
//int main(){
//	char c;
//	scanf("%c",&c);
//	char kitu=toLower(c);
//	printf("%c ",kitu);
//}

//#include<stdio.h>
//#include<string.h>
//
//int main(){
//	char c[1000];
//	gets(c);
//	for(int i=0;i<strlen(c);i++){
//		if(c[i]>='A'&&c[i]<='Z'){
//			c[i]+=32;
//		}
//	}
//	for(int i=0;i<strlen(c);i++){
//		printf("%c",c[i]);
//	}
//}

/*reverse*/

//#include<stdio.h>
//void Reverse(){
//    char c;
//    scanf("%c", &c);
//    if(c != '\n'){
//        Reverse();
//        printf("%c", c);
//    }
//}
// 
//int main(){
//    printf("Enter you sentence: ");
//    Reverse();
//}


/*reverse tung tu */

//#include <stdio.h>
//#include <string.h>
//
//int string_length(char s[]) {
//   int i=0;
//
//   while(s[i]!='\0')
//      i++;
//
//   return i;	
//}
//
//void string_reverse(char st[]) {
//   int i,j,len;
//   char ch;
//
//   j = len = string_length(st) - 1;
//   i = 0;
//
//   while(i < j) {
//      ch = st[j];
//      st[j] = st[i];
//      st[i] = ch;
//      i++;
//      j--;
//   }
//}
//
//int main (void) {
////   char line[] = "VietJack la mot trong cac trang web huong dan lap trinh tot nhat";
//	char line[1000];
//	gets(line);
//   char reverse[100]="",temp[50];
//   int i,j,n;
//
//   n = string_length(line);
//
//   for(i = 0; i < n; i++) {
//
//      for(j = 0; i < n && line[i]!=' '; ++i,++j) {
//         temp[j] = line[i];
//      }
//      
//      temp[j] = '\0';
//
//      string_reverse(temp);
//
//      strcat(reverse, temp);
//      strcat(reverse, " ");
//   }
//   
////   printf("Chuoi ban dau:\n %s", line);
//   printf("\nChuoi sau khi da dao nguoc: %s",reverse);
//   
//   return 0;
//}

/*doi chuoi thanh so nguyen */

//#include<stdio.h>
//#include<stdlib.h>
//
//int main() {
//   int num;
//   char marks[100];
//
//   printf("Nhap diem thi: ");
//   gets(marks);
//
//   num = atoi(marks);
//   printf("\nDiem thi vua nhap: %d", num);
//
//   return (0);
//}

/*so sanh cac chuoi */

//#include<stdio.h>
//#include<string.h>
//
//int main() {
//   char s[5][20], t[20];
//   int i, j;
//
//   printf("\nNhap 5 chuoi bat ky: \n");
//   for (i = 0; i < 5; i++)
//      scanf("%s", s[i]);
//
//   for (i = 1; i < 5; i++) {
//      for (j = 1; j < 5; j++) {
//         if (strcmp(s[j - 1], s[j]) > 0) {
//            strcpy(t, s[j - 1]);
//            strcpy(s[j - 1], s[j]);
//            strcpy(s[j], t);
//         }
//      }
//   }
//
//   printf("\nSap xep thu tu cua cac chuoi:");
//   for (i = 0; i < 5; i++)
//      printf("\n%s", s[i]);
//
//   return(0);
//}

/*noi chuoi */

//#include<stdio.h>
//#include<string.h>
//
//int main() {
//   char str1[100];
//   char str2[100];
//   char str3[100];
//   int len;
// 
//   printf("\nNhap chuoi 1:\n");
//   gets(str1);
// 
//   printf("\nNhap chuoi 2:\n");
//   gets(str2);
// 
//   strcpy(str3, str1);
//   strcat(str3, str2);
// 
//   printf("\n\nNoi chuoi: %s", str3);
// 
//   return (0);
//}

#include<stdio.h>
#include<string.h>
int main(){
	char c[1000];
	gets(c);
	printf("%d",strlen(c));
}
