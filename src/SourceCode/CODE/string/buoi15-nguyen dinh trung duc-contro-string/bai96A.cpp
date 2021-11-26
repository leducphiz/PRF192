/*bai 96A*/

#include<stdio.h>
#include<string.h>
int main(){
	char c[100];
	gets(c);
	int one=0,zero=0;
	for(int i=0;i<strlen(c);i++){
		if((c[i]-'0')==1){
			one++;
			zero=0;
		}
		else{
			zero++;
			one=0;
		}
		if(one==7 || zero==7){
			printf("YES");
			return 0;
		}
	}
	printf("NO");
}
