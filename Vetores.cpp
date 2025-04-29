#include <stdio.h>

main()
{
	int A[10], i, val, existe;
	
	printf("\nDigite os 10 valores de A:");
	for (i=0; i<10; i++)
	    scanf("%d", &A[i]);
	
	printf("\nDigite o valor a buscar: ");
	scanf("%d", &val);
	
	existe = 0; // existe == 0 val não está em A
	for (i=0; i<10; i++)
	    if(val == A[i])
	    {
	    	existe = 1;
	    	break;
		}
		
	if (!existe)
	    printf("\nO valor %d nao existe no vetor!", val);
	else
	    printf("\nO valor %d existe no vetor!", val);
	
	
	
	
}
