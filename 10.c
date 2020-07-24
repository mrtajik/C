/* integer types */
/*
	short          int  2	-32,768 to 32,767   			%hd
    unsigned short int	2	0       to 65,535	    		%hu
          unsigned int	4	0   to 4,294,967,295			%u
                   int	4	-2,147,483,648 to 2,147,483,647	%d
              long int	8	-2,147,483,648 to 2,147,483,647	%ld
     unsigned long int	8	0 to 4,294,967,295				%lu
         long long int	8	-(2^63) to (2^63)-1				%lld
unsigned long long int	8	0 to 18,446,744,073,709,551,615	%llu	
*/

/* Getting the sizes of integer types */

#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("sizeof(short)        = %d bytes\n",sizeof(short));
    printf("sizeof(int)          = %d bytes\n",sizeof(int));
    printf("sizeof(unsigned int) = %d bytes\n",sizeof(unsigned int));
    printf("sizeof(long)         = %d bytes\n",sizeof(long));

	return 0;
}