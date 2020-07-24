/*
	Calculating dimension
	working with user inputs
	and printing outcomes.
*/
#include <stdio.h>
main()
{
	int height,length,width,volume,weight;

	printf("Enter height of box: ");
	scanf("%d", &height);
	printf("Enter length og the box:");
	scanf("%d",&length);
	printf("Enter width og the box:");
	scanf("%d",&width);
    volume=height*width*length;
    weight=(volume+165)/166;
    
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);
	
	return 0;
}

