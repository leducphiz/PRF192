/*bai 1 phan loai ki tu */

#include<stdio.h>
#include<string.h>
int main(){
	char c[100];
	gets(c);
	int cnt1=0,cnt2=0,cnt3=0;
	for(int i=0;i<strlen(c);i++){
		if(c[i]>='0' && c[i]<='9'){
			cnt1++;
		}
		else if(c[i]>='a' && c[i]<='z' || c[i]>='A' && c[i]<='Z'){
			cnt2++;
		}
		else cnt3++;
	}
	printf("%d %d %d",cnt1,cnt2,cnt3);
}
