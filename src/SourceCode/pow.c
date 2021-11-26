/* pow example 
double pow (double base     , double exponent);
float pow (float base      , float exponent);
long double pow (long double base, long double exponent);
*/
#include <stdio.h>      /* printf */
#include <math.h>       /* pow */
 
int main ()
{
  printf("2^4=%d", int(pow(2, 4)));
}