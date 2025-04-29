#include<stdio.h>

main()
{
	float n1, n2, med, soma, mg;
	int N=1, cont=1, ap, rp;
	
	printf("Digite o total de alunos:");
	scanf("%d", &N);
	
	while
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
}
