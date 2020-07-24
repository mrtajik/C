/* Selection statements (if,if else, switch)*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* Selection statements*/
	int d;
	
	printf("Enter Your number(1-5): ");
	scanf("%d", &d);
    
    
	if(d==4)
		printf("Excellent\n");
	else 
		printf("FAIL\n");

	return 0;
}