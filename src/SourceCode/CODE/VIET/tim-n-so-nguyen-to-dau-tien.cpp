
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int isPrime(int m) {
  if(m==1) return(0);
  if(m==2) return(1);
  int i;
  for(i=2;i<=sqrt(m);i++)
    if(m%i==0) return(0);
  return(1);  
 }
 int main()
 { int m=100;
 //* m so nguyen to dau tien..........
// int i=2;
// int count=0;
// do
// { if (isPrime(i)==1)
//		{ printf("%d\t",i); count++;}
//  i++;
// 
// }while(count<=m);
// 
 //...........................
 // cac So nguyen to <=m.........
 int i;
 for(i=2;i<=m;i++)
 if(isPrime(i)==1)
 printf("%d\t",i);
 
 
 
 }

