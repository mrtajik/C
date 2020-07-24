/* Selection statements (if, if else, switch)   */

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

    
    printf("Enter Your number(0-1): ");
	scanf("%d", &d);
	switch (d) {
		case 1: printf("Excellent\n");
				break;
		case 0: printf("FAIL\n");
				break;
	            }

	return 0;
}
