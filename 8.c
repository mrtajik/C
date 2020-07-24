/* Iteration statements (while, do, for) */

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i,f;
	
	/* While*/
	printf("While statement \n");
    printf("Enter Your number(1-3): ");
	scanf("%d", &i);
    
    while (i>0) {
		printf("counting %d\n", i);
        i--; }	   
	
    
	/* do */
    printf("do statement \n");
    printf("Enter Your number(1-3): ");
	scanf("%d", &i);    
    do printf("counting %d\n", i--);
    while (i>0);

    
    /* for */
    printf("for statement \n");
    for (f=5; f>0; f--)
    	printf("counting %d\n", f);


	return 0; 
}