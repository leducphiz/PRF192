/* exp example 
double exp (double x);
float exp (float x);
long double exp (long double x);
*/
#include <stdio.h>      /* printf */
#include <math.h>       /* exp */
 
int main ()
{
  double param, result;
  param = 5.0;
  result = exp (param);
  printf ("e^%f = %f.\n", param, result );
  return 0;
}
 