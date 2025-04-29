#include<stdio.h>
#include<string.h>

main()
{
	char frase[100];
	int tam;
	
	printf("\nDigite uma frase:");
	fflush(stdin);
	gets (frase);
	
	tam = strlen(frase);
	
	printf("\nA frase: '%s' tem %d letras\n", frase, tam);
}
