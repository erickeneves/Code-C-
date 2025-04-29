#include <stdio.h>

main()
{
	float n1, n2, med;
	
	printf("Digite a primeira nota:");
	scanf("%f",&n1);
	printf("Digite a segunda nota:");
	scanf("%f",&n2);
	
	med = (n1+n2)/2;
	
	if (med >= 6)
	    printf("Aprovado com media = %.2f", med);
	else
	    printf("Reprovado com media = %.2f", med);
	
}
