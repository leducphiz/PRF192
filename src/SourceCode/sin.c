
/* sin example
double sin (double x);
float sin (float x);
long double sin (long double x);
*/
#include <stdio.h>      /* printf */
#include <math.h>       /* sin */
 
#define PI 3.14159265
 
int main ()
{
  double param, result;
  param = 30.0;
  result = sin (param*PI/180);
  printf ("The sine of %f degrees is %f.\n", param, result );
  return 0;
}