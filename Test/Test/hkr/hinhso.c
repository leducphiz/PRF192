
#include <stdio.h>
#include <math.h>
 
 int binToDec(long long bin) {
     int p = 0;
     int dec = 0;
     while (bin > 0) {
         dec += (bin % 10) * pow(2, p);
         p++;
         bin /= 10;
 
     }
     return dec;
 }
  int main () {
     long long bin; 
     scanf("%lld", &bin);
     printf("%d", binToDec(bin));
  } 

