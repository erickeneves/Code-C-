#include <stdio.h>

main ()

{
	int A, B, C, emp;
		
	printf("Dois ou um... : ");
	scanf("%d", &A);
	printf("Dois ou um... : ");
	scanf("%d", &B);
	printf("Dois ou um... : ");
	scanf("%d", &C);
	
	if (A==B)
	    printf("\nVencedor: %d !", C);
	else (B==C);
	    printf("\nVencedor: %d !", A);
	    if (A==C)
	        printf("\nVencedor: %d", B);
}
