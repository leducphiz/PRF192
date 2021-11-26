/*bai 43A*/

#include<stdio.h>
#include<string.h>
int main(){
	int n,dem=1;
	scanf("%d",&n);
	char s1[100],s2[100];
	scanf("%s",s1);
	for(int i=1;i<n;i++){
		char c[1000];
		scanf("%s",c);
		if(strcmp(c,s1)==0){
			dem++;
		}
		else{
			strcpy(s2,c);
		}
	}
	if(dem>(n-dem)){
		printf("%s",s1);
	}
	else printf("%s",s2);
	return 0;
	
}
