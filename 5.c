/*The scanf function*/
/* %d (or %i) int(base 10)
   %c         char
   %f         float
   %lf        double
   %s         string
   %x         hex(base 16)
*/

#include <stdio.h>
main()
{
	int test;
        printf("Enter an integer: ");
        scanf("%d", &test);  
        printf("Number = %d",test);
    
	return 0;
}	
