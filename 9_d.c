/*PUTCHAR(), GETCHAR(), TOUPPER() FUNCTIONS*/


#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char c,f;
    printf("Enter some character: ");
    c = getchar();
    putchar(c);
    printf("\n");
    f=toupper(c);
    printf("Your character : %c\n", f);	
       
    return 0;
}
