/*bai 1095A*/

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	char c[n+1];
	scanf("%s",c);
	int cnt=0;
	for(int i=0;i<n;i++){
		if(cnt>=n) break;
		printf("%c",c[cnt]);
		cnt+=i+1;
	}
}


