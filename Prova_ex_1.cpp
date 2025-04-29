#include<stdio.h>

main()
{
	float n1, n2, med, soma, mg;
	int cont, ap, rp;
	
	cont=1;
	
	while (cont <= 10)
	{
		printf("\nAluno nro. %d", cont);
		printf("\nDigite a primeira nota: ");
		scanf("%f", &n1);
		printf("\nDigite a segunda nota: ");
		scanf("%f", &n2);
		med = (n1+n2)/2;
		
		soma += med;
		if (med >= 6)
		{
			printf("\nAprovado com media = %.2f", med);
			ap++;
		}
		else
		{
			printf("\nReprovado com media = %.2f", med);
			rp++;
		}
	    cont++;
	}
	mg = soma/5;
	printf("\nMedia geral: %.2f", mg);
	printf("\nTotal de aprovados: %d", ap);
	printf("\nTotal de reprovados: %d", rp);
}
