#include <stdio.h>
#include <string.h>

main()
{
	char capital[10]="paris", cidade[10];
	
	printf("\nQual a capital da Franca?\n");
	fflush(stdin);
	gets(cidade);
	
	if (strcmp(strlwr(cidade), capital)==0)
	    printf("\nVoce acertou!");
	else
	   printf("\nVoce errou...");
	   
}
