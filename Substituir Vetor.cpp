#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int A[20], i, aux;
	
	srand(time(NULL));
	for (i=0; i<20; i++)
	    A[i] = rand()%100;
	    
	printf("\nVetor gerado:");
	for (i=0; i<20; i++)
	    printf("%d ", A[i]);
	    
	for (i=0; i<10;i++)
	{
		aux = A[i];
		A[i] = A[i+10];
		A[i+10] = aux;
	}
	printf("\nVetor modificado:\n");
	for (i=0; i<20;i++)
	    printf("%d ", A[i]);
}
