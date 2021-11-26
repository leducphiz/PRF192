/* 703 A */

#include<stdio.h>
int main(){
	int i,t;
	int count=0;
	scanf("%d", &t);
	for(i=1;i<=t;i++){
		int m,c;
		scanf("%d %d", &m, &c);
		if(m>c) {
		count+=1;
	}
		else if(m<c) count-=1;
	}
	if (count>0) printf("Mishka");
	else if (count<0) printf("Chris");
	else if (count==0) printf("Friendship is magic!^^");
}


