#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int A[20]= {1,1} ,i;
	
	for (i=2; i<20; i++)
	    A[i] = A[i-1] +A [i-2];
	   
	printf("\nNumeros de Fibonacci:\n");
	for (i=0; i<20; i++)
	    printf(" %d", A[i]);

}
