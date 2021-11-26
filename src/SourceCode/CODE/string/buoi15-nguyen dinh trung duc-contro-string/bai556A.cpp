/*bai 556A*/

#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	char c[n+1];
	scanf("%s",c);
	int cnt1=0,cnt2=0;
	for(int i=0;i<n;i++){
		if((c[i]-'0')==0) cnt1++;
		else if((c[i]-'0')==1) cnt2++;
	}
	int cnt=abs(cnt1-cnt2);
	printf("%d",cnt);
}
