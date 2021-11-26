#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
	 char a[5][100];
    int n=4;
    
    for(int i = 0; i < n; i++){
        //printf("\nNhap a[%d] = ",i);
        scanf("%s", &a[i]);
        fflush(stdin);
    }
    
   
    char tg[100];
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(strcmp(a[i],a[j])>0){
        
                strcpy(tg,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],tg);    
            }
        }
    }
    
    
    printf("\nOUTPUT: \n");
    for(int i = 0; i < n; i++){  	
        printf("%s", a[i]);
		if(i<n-1)
		printf(" ");
    }
}
