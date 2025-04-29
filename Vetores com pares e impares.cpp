#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int A[20], B[20], C[20], i, j, k;
	
	srand(time(NULL));
	for (i=0; i<20; i++)
	    A[i] = rand()%100;
	    
	printf("\nVetor gerado:");
	for (i=0; i<20; i++)
	    printf("%d", A[i]);
	    
	j=0;
	k=0;
	
	for (i=0; i<20; i++)
	    if (A[i] % 2==0) // A[i] é um par
	    {
	        B[j] = A[i];
	        j++;
        }
        else
        {
        	C[k]=A[i];
        	k++;
		}
}
