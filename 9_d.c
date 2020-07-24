/*PUTCHAR(), GETCHAR() FUNCTIONS*/


#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	char c;
    printf("Enter some character: ");
    c = getchar();
    putchar(c);
    printf("\n");
       
	return 0;
}