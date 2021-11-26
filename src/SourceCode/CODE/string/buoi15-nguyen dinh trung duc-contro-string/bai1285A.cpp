/*bai 1285 A string*/

#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	char c[n+1];
	scanf("%s",c);
	int cnt1=0,cnt2=0;
	for(int i=0;i<n;i++){
		if(c[i]=='L') cnt1++;
		else cnt2++;
	}
	int sum=cnt1+cnt2+1;
	printf("%d",sum);
}
