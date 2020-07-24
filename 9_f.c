/* Conversion During Assigment */

#include <stdio.h>

int main(int argc, char const *argv[])
{
	char c;
	int i;
	float f;
	double d;

	i=c;
	printf("%d\n", &i);
	
	f=i;
	printf("%f\n", &f);

	d=f;
	printf("%lf\n", &d);


	return 0;
}