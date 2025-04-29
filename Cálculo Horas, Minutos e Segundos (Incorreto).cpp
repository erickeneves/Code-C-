#include <stdio.h>

main()
{
	int tempo, H, M, S;
	
	printf("Digite o tempo em segundos:");
	scanf("%d", &tempo);
	
	H = tempo%3600;
	M = H%60;
	S = M%10;
	
	printf("\n %d horas, %d minutos e %d segundos", H, M, S);
}
