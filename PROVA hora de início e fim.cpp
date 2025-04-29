#include <stdio.h>

main()

{
	int hi, hf, dur;
	
	printf("Digite a hora inicial do jogo:");
	scanf("%d", &hi);
	printf("Digite a hora final do jogo:");
	scanf("%d", &hf);
	
	if (hf > hi)
	   dur = hf-hi;
	else
	   dur = 24 - hi+hf;
	
	printf("\nO jogo durou %d horas", dur);
}
