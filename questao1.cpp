#include <stdio.h>

main()

{
	float alt, idd;
	
	printf("Digite a altura do jogador:");
	scanf("%f", &alt);
	printf("Digite a idade do jogador:");
	scanf("%f", &idd);
	
	if (alt > 1.85 && idd < 20)
	    printf("\nJogador aceito no time!", alt);
	else
	    printf("\nJogador rejeitado no time!", alt);
	
	    
}
