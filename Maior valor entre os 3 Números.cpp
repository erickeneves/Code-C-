#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
    int A[10], B[10], a, b, c;
        srand(time(NULL));
	for (a=0; a<100; a++)
	    A[a] = rand()%100+1;
	    
	printf("\nVetor gerado:");
	for (a=0; a<10; a++)
	    printf(" %d", A[a]);
	
	if ( ( a>b) && (a>c) )
	      printf("\nMaior valor = %d", a);
	else 
	     if (b > c)
	      printf("\nO maior valor = %d", b);
	     else
	      printf("\nO maior valor = %d", c);
}
