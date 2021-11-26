#include<stdio.h>

int main(){
	int points;
	char rank; 
	
	printf("input rank :");
	scanf("%c", &rank);
	
	if(rank == 'J' || rank == 'Q' || rank == 'K' ){
		points = 11;
	}else if(rank == 'A'){
		points = 1;
	}else if( rank >= '2' && rank <= '9' ){
		points = (int)rank - 48;
	}else if( rank == '0'){
		points = 10;
	}
	
	printf("value of the card is %d points", points);
	getch();
}
