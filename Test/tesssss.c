#include<stdio.h>
#include<string.h>
#include<conio.h>
int ret(int ret){
	ret += 2.5;
	return (ret);
}
int main(){
	double x = -3.5,y=3.5;
	printf("%.0f : %.0f\n", ceil(x),ceil(y));
	printf("%.0f : %.0f\n", floor(x),floor(y));

	return 0;
}
