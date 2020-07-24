/* Operator - sizeof */
/*
	sizeof - operator allows a program to determine how much 
    memory is requered to store values of particular type.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("%lu\n", sizeof(char)); 
    printf("%lu\n", sizeof(int)); 
    
    return 0;
}