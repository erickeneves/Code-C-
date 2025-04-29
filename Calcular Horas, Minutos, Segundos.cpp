#include <stdio.h>

int main()
{
	int tempo, h, m, s;
	
	printf("Digite um tempo em segundos:");
	scanf("%d", &tempo);
	
	h = tempo/3600;
	m = (tempo % 3600)/60;
	s = tempo % 60;
	
	printf("\n%d horas, %d minutos e %d segundos", h, m, s);
}
