/* dem tan suat xuat hien cac ki tu trong chuoi */

#include<stdio.h>
#include<string.h>
int main(){
	int length, ascii[30], i, j, mem, n, count;
	char str[30];
	gets(str);
	length=strlen(str);
	for(i=0;i<=length;i++) ascii[i]=str[i];
	n=length;
	for(i=0;i<=n;i++){
		int j;
		for(j=i+1;j<=n;j++){
			if(ascii[i]==ascii[j]||ascii[j]==32||ascii[j]==0){
				mem=j;
				for(j;j<=n;j++) ascii[j]=ascii[j+1];
				n--;
				j=mem-1;
			}
		}
	}
	for(i=0;i<=n;i++){
		count=0;
		for(j=0;j<=length;j++) if(ascii[i]==str[j]) count++;
		printf("\n%c xuat hien: %d lan", ascii[i], count);
	}
}
