/*bai 1 tinh do dai cua cac chu in thuong chuoi */

#include<stdio.h>
#include<string.h>
int main(){
	char c[1000];
	gets(c);
	int cnt=0;
	for(int i=0;i<strlen(c);i++){
		if(c[i]>='a'&&c[i]<='z'){
			cnt++;
		}
	}
	printf("%d",cnt);
}

//#include <stdio.h>
// 
//int main() {
//   // khoi tao chuoi s1
//   char s1[] = "VietTuts.Vn";
//   int i = 0;
//     
//   // su dung vong lap while tinh do dai cua chuoi
//   // '\0' la ky tu NULL ket thuc cua mot chuoi
//   while(s1[i] != '\0') {
//      i++;
//   }
//    
//   printf("Do dai cua chuoi '%s' la: %d", s1, i);
//    
//   return 0;
//}


