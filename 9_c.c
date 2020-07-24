/* Character types*/
/*
	the char type has a 1-byte unit of memory so it is 
	more than enough to hold the ASCII codes. Besides ASCII code, 
	there are various numerical codes available such as extended ASCII codes. 
	Unfortunately, many character sets have more than 127 even 255 values. 
	Therefore, to fulfill those needs, 
	the Unicode was created to represent various available character sets. 
	Unicode currently has over 40,000 characters.

	credits:https://www.zentut.com/c-tutorial/c-character-type/
*/

/* Displaying C character type */

#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char const *argv[])
{
    char ch = 'B';
    printf("ch = %c\n",ch);
    printf("ch = %d, hence an integer\n",ch);
 
    return 0;
}