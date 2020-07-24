/* Pointers */
/*
	Pointer - address
	pointer variable - variable that can store an address

	A pointer variable can point another pointer
*/

/* Delclaring pointer variables: */
/*
	int *p;   integers
	float *q; floats 
	char *r; characters
*/

/*
	Address Operator
	int i,*p;
	p=&i;
	In this example p pointing to i.


	Indirection Operator
	p=&i;
	i=1;

	
	Pointer Assignment
	int i, *p, *q;
	p=&i;
	Another example
	q=p;


	Pointers as Arguments
	Example:
	void decompose(float x, int *int_part, gloat *frac_part)
	{
		*int_part=(int) x;
		*frac_part=x- *int_part;
	}


	Calling decompose function:
		decompose(3.14514. &i, &f);
	Note: result would be x=3.24524, pointer to i stored in 
	int_part and pointer to f stored in frac_part;


	Function that returns pointer
	Example:
	int *max(int *a, int *b)
	{
		if(*a>*b)
		   return a;
		else 
		   rerurn b;
	}

	Calling function *max:
	int *p,x,y;
	p=max(&x,&y);
	
	
	Pointer arithmetics:
	-adding an integer to a pointer
	-substracting an integer from a pointer
	-substracting two pointers

	Comparing pointers:
	-usual relational operations;	
*/
