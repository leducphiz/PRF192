// nhap 1 so n khong am va tim tich cac so chia het cho 2 va nho hon n/2


#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h> 



int clean_stdlin(){
	while(getchar() != '\n'){}
	return 1;
}

int main(){
	system("cls");
	// nhap
	int n=-1;
	char c;
	do{
//		printf("Nhap n: ");
	}while(((scanf("%d%c",&n,&c) != 2 || c!='\n') && clean_stdlin()) || n<0);
	 
	printf("\nOUTPUT: \n");
	//in ra 
	
	int i, t=1; 
	for(i=2;i<=n/2;i++){ 
		if(i%2==0){
			t=t*i;
		}
	}
	printf("%d\n",t);
	system("pause");
	return 0;
}
