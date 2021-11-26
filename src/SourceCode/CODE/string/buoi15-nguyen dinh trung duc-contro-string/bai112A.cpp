/*bai 112A*/

#include<stdio.h>
#include<string.h>
int main(){
	char c1[101], c2[101];
	gets(c1);
	gets(c2);
	int x=stricmp(c1,c2);
	printf("%d",x);
}
