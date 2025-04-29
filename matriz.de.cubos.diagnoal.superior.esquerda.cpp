#include <stdio.h>

main()
{
	int A[5][5], i, j;
	//zerar a matriz inteira
	for (i=0; i<5; i++)
	    for (j=0; j<5; j++)
	        A[i][j] = 0;
	        
    //colocar 1 no triangulo superior direito	
	for (i=1; i<5; i++)
	    for (j=5-i; j<5; j++)
	           A[i][j] = 1;
	        
	for (i=0; i<5; i++)
	{
		for (j=0; j<5; j++)
		    printf("%3d", A [i][j]);
		printf ("\n");
	}
}
