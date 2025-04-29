#include <stdio.h>

main()
{
	char sexo;
	float alt, peso;
	
	printf("\nDigite o sexo [F ou M]:");
	scanf("%c", &sexo);
	
	printf("\nDigite a altura:");
	scanf("%f", &alt);
	
	if (sexo=='F')
	{
		peso = (62.1*alt)-44.7;
		printf("\nPeso ideal: %.2f", peso);
	}
	else
	    if (sexo=='M')
	    {
	    	peso = (72.7*alt)-58;
	    	printf("\nPeso ideal: %.2f", peso);
		}
		else
		    printf("\nNao ha peso ideal para seu genero!");
}
