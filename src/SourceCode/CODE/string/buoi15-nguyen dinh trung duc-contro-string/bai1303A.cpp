/*bai 1303A*/
#include<stdio.h>
#include<string.h>
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		char c[1000];
		scanf("%s",c);
		int len=strlen(c);
		int l=0,r=0;
		for(int i=0;i<len;i++){
			if(c[i]=='1'){
				l=i;
				break;
			}
		}
		for(int i=len-1;i>=0;i--){
			if(c[i]=='1'){
				r=i;
				break;
			}
		}
		int cnt=0;
		for(int i=l;i<r;i++){
			if(c[i]=='0'){
				cnt++;
			}
		}
		printf("%d\n",cnt);
	}
}
