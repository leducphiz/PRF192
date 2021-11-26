/*string*/

//#include<stdio.h>
//#include<string.h>
//int main(){
//	char c[1001];
//	gets(c);
//	for(int i=0;i<strlen(c);i++){
//		printf("%c",c[i]);
//	}
//}

/*ham strstr tim chuoi s co s1 khong, neu co tra ve dia chi dau tien cua s1, khong co tra ve null */

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//   const char haystack[50] = "i love you";
//   const char needle[10] = "love";
//   char *ret;
//
//   ret = strstr(haystack, needle);
//
//   printf("Chuoi con la: %s\n", ret);
//   
//   return(0);
//}

//#include<stdio.h>
//#include<string.h>
//int main(){
//	char ho[100];
//	char dem[100];
//	char ten[100];
//	char a[1000];
//	char viet[1000];
//	char anh[1000];
//	gets(ho);
//	gets(dem);
//	gets(ten);
//	strcpy(viet,ho);
//	strcat(viet,dem);
//	strcat(viet,ten);
//	strcpy(anh,ten);
//	strcat(anh,ho);
//	strcat(anh,dem);
//	printf("\nTen tieng viet: %s",viet);
//	printf("\nTen tieng anh: %s",anh);
//}

//#include<stdio.h>
//#include<string.h>
//int main(){
//	char c[1000];
//	gets(c);
//	char c1[1000];
//	gets(c1);
//	int d=strcmp(c,c1);
//	printf("%d",d);
//}

//nhap 4 ten cua 4 ng khac nhau, sort ten cua cac nguoi nay theo thu tu tang dan cua tu dien
//va theo chieu dai cua ma ascii 

//#include<stdio.h>
//#include<string.h>
//int main(){
//char s[4][20], t[20];
//   int i, j;
//   for (i = 0; i < 4; i++)
//      scanf("%s", s[i]);
//
//   for (i = 1; i < 4; i++) {
//      for (j = 1; j < 4; j++) {
//         if (strcmp(s[j - 1], s[j]) > 0) {
//            strcpy(t, s[j - 1]);
//            strcpy(s[j - 1], s[j]);
//            strcpy(s[j], t);
//         }
//      }
//   }
//  
// for (i = 0; i < 4; i++)
//      printf("%s ", s[i]);
//}

//dem tan suat xuat hien cac ki tu nam trong chuoi 's', co phan biet chu hoa, chu thuong.
//#include<stdio.h>
//#include<string.h>
//int main(){
//	char c[1000],s[]={'\0'};
//	int b[1000]={0};
//	int pt[1000];
//	int dem=0;
//	gets(c);
//	int n=0;
//	for(int i=0;i<strlen(c);i++){
//		int cnt=1;
//		if(b[c[i]-'A'] == 0){
//			b[c[i]-'A'] = 1;
//			for(int j=i+1;j<strlen(c);j++){
//				if((c[j])==(c[i])){
//					cnt++;
//				}
//				else break;
//			}
//			strcpy(s,c);
//			pt[dem]=cnt;
//			dem++;
//		}
//	}
//	for(int i=0;i<dem;i++){
//		printf("%c xuat hien %d lan\n", s,pt[i]);
//	}
//}


/* dao phan tu giong nhau */
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

