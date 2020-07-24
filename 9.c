 /* Jump statements (break,continue, goto)

    Compound statement(groups of several statements into  single statement)
    and null statement(no action performed). 
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i,num;
    double number, sum = 0.0, dum;
    
    /* break */

    for(i=1; i <= 3; ++i)
    {
        printf("Enter a n%d: ",i);
        scanf("%lf",&number);

        // If the user enters a negative number, the loop ends
        if(number < 0.0)
        {
        	break;
        }

        sum += number; 
    }

    printf("Sum = %.2lf\n",sum);
    
    
    /* continue */

    for(i=1; i <= 2; ++i)
    {
        printf("Enter a n%d: ",i);
        scanf("%lf",&number);

        // Even If the user enters a negative number, the loop continues
        if(number < 0.0)
        {
        	continue;
        }

        dum += number; 
    }

    printf("Sum = %.2lf\n",dum);

    /* goto */

    printf("Enter a n(0-9): ");
    scanf("%d",&num);
    if (num % 2 == 0) 
        // jump to even 
        goto even;  
    else
        // jump to odd 
        goto odd;  
  
    even: 
    printf("%d is even\n", num); 
    goto end; 

    odd: 
    printf("%d is odd\n", num);
   
    end:
    return 0;
}