#include<stdio.h>
#include <stdbool.h>

int main(){
	char a;
	//get name from user input and print it out
											
		while(true){
    	printf("In: ");
    	
    	fflush(stdin);
	    scanf("%c", &a);
	    
	   if(a=='y'||a=='n'){
        break; 
	}
	}
	printf("OK");
	return 0;
}
