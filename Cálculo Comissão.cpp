#include <stdio.h>

main()
{
	int tot, C, D, U;
	
	printf("Digite o numero:");
	scanf("%d", &tot);
	
	C = tot/100;
	D = (tot%100)/10;
	U = tot%10;
	
	
	
	printf("\nCentena: %d Dezena: %d e Unidade: %d",C,D,U);
}
