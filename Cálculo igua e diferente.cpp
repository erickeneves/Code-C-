#include <stdio.h>

main()
{
	int a ,b;
	
	printf("Digite o primeiro numero:");
	scanf("%d", &a);
	printf("Digite o segundo numero:");
	scanf("%d", &b);
	
	if (a==b)
	   printf("\nSao iguais!");
	else
	   if (a>b)
	       printf("\nMaior valor = %d", a);
	   else
	       printf("\nMaior valor = %d", b);   
}
