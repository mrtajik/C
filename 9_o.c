/* Recursive Functions */
/*
	A function recursive if it calls itself.
	For example:    n!=nx(n-1)!
*/
#include <stdio.h>

int fact(int n)
{
	if (n<=1)
	{
		return 1;

	}
	else 
		return n*fact(n-1);
}

int main(int argc, char const *argv[])
{
	int n;
	n=5;

	printf("%d\n", fact(n));

	return 0;
}