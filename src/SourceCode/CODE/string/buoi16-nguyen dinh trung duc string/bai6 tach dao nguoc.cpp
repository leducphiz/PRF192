/*bai 6 tach dao nguoc */

#include<stdio.h>
#include<string.h>
int main(){
	char c[100];
	gets(c);
	int n;
	for(int i=n-1;i>=0;i--){
		if(c[i]==' ') continue;
		printf("%c ",c[i]);
	}
}

