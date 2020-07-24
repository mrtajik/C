/*Expressions*/
/* Arithmetic operators (+,-,*,/)
   Relational operators (<,>,=>,+<,!=,==)
   Logical    operators (&& -AND, || - OR, ! -NOT)
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a = 6, b = 6, c = 8, logic;
	printf("0- FALSE  1- TRUE\n");
    printf("%d == %d is %d \n", a, b, a == b);
    printf("%d == %d is %d \n", a, c, a == c);
    printf("%d > %d is %d \n", a, b, a > b);
    printf("%d > %d is %d \n", a, c, a > c);
    printf("%d < %d is %d \n", a, b, a < b);
    printf("%d < %d is %d \n", a, c, a < c);
    printf("%d != %d is %d \n", a, b, a != b);
    printf("%d != %d is %d \n", a, c, a != c);
    printf("%d >= %d is %d \n", a, b, a >= b);
    printf("%d >= %d is %d \n", a, c, a >= c);
    printf("%d <= %d is %d \n", a, b, a <= b);
    printf("%d <= %d is %d \n", a, c, a <= c);
    logic= !(a == b);
    printf(" !(a == b) is %d \n", logic);

    return 0;
}