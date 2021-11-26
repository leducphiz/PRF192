/*bai 282A*/
#include<stdio.h>
#include<string.h>
int main(){
	int n,x=0;
	scanf("%d",&n);
	char c[100];
	for(int i=0;i<n;i++){
		scanf("%s",c);
		if(c[1]=='+') x++;
		else x--;
	}
	printf("%d",x);
}

