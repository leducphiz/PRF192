/*bai 20 tim tap hop tu rieng cua 2 chuoi */

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char c1[100],c2[100],a1[50][50],a2[50][50];
	gets(c1);
	gets(c2);
	int n1=0,n2=0;
	char *token=strtok(c1," ");
	while(token!=NULL){
		strcpy(a1[n1],token);
		n1++;
		token=strtok(NULL," ");
	}
	token=strtok(c2," ");
	while(token!=NULL){
		strcpy(a2[n2],token);
		n2++;
		token=strtok(NULL," ");
	}
	// swap phan tu cua chuoi 1 theo thu tu tang dan 
	for(int i=0;i<n1;i++){
		int min=i;
		for(int j=i+1;j<n1;j++){
			if(strcmp(a1[min],a1[j])>0){
				min=j;
			}
		}
		char tmp[100];
		strcpy(tmp,a1[min]);
		strcpy(a1[min],a1[i]);
		strcpy(a1[i],tmp);
	}
	for(int i=0;i<n1;i++){
		while(strcmp(a1[i],a1[i+1])==0){
			i++;
		}
		int ok=1; 
		for(int j=0;j<n2;j++){
			if(strcmp(a1[i],a2[j])==0){
				ok==0;
				break;
			}
		}
		if(ok){
			printf("%s ",a1[i]);
		}
	}
}
