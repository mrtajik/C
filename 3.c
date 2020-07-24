/*Print int and float values in various formats*/
/* d-displays an integer in decimal(base 10).
   e-displays a floating-point number in exponential format.
   f-displays  a flaoting-point num,ber in "fixed decimal" format, without an exponent.
   g-displays a floating-point number in either exp format or fixed decimal format,
   depending, on the number's size.

#include<stdio.h>

int main(int argc, char const *argv[])
{
	int i;
	float x;

	i=40;
	x=839.21;

	printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
	printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

	return 0;
}
