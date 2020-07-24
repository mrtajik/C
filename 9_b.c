/*floating types*/
/*
float: for numbers with single precision.
double: for numbers with double precision.
long double: for numbers with extended precision.
*/

/*Example of Float ranges and precision */

#include <stdio.h>
#include <float.h>
 
int main( )
{
  printf("Storage size: %d bytes\n"
         "Minimum float value: %E\n"
         "Maximum float value: %E\n"
         "Precision: %d decimal digits\n",
         sizeof(float),
         FLT_MIN,
         FLT_MAX,
         FLT_DIG);
 
  puts("\nExample of float precision:\n");
  double d = 12345.6;
  float  f = (float)d;
 
  printf("The floating-point number d  "
         "%18.10f\n", d);
  printf("Stored in a variable f\n"
         "of type float as the value   "
         "%18.10f\n", f);
 
  return 0;
}