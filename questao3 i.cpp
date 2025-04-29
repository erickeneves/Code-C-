#include <stdio.h>

main()
{
	float N, n1, n2, med, soma, mg;
	
	printf("Digite o total de alunos:");
	scanf("%f", &N);
	
	N = 1;
	med = (n1+n2)/N;
	
	while (N >= 1)
	{
		printf("\nDigite a nota: ");
		scanf("%f", &n1);
		med = (n1+n1)/2;
		
		soma += med;
    }
    mg = soma/N;
    printf("\nMedia geral da classe: %.2f");
	
}
