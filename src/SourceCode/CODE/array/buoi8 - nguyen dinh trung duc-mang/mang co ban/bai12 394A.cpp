/*bai 12 394A */
#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[100001];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int c25=0, c50=0;
	for(int i=0; i<n;i++){
		if(a[i]==25){
			c25++;
		}
		else if(a[i]==50){
			if(c25==0){
				printf("\nNO"); 
				return 0;
			}
			else{
				c25--;
				c50++;
			}
		}
		else{
			if(c25==0 || (c25<3 && c50==0)){
				printf("\nNO");
				return 0;
			}
			c25--;
			if(c50>0){
				c50--;
			}
			else{
				c25-=2;
			}
		}
	}
	printf("YES");
	return 0;
}
