#include <stdio.h>

main()
{
	char Sexo;
	
	printf("Digite o sexo [F ou M]:");
	scanf("%c", &Sexo);
	
	if (Sexo=='F')
        printf("\nFeminino!");
    else
        if (Sexo=='M')
	        printf("\nMasculino!");
	    else
	        printf("\nOutro genero");
}
