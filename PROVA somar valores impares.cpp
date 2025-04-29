#include <stdio.h>

main()

{
	int a, b, soma=0, num;
	
	printf("Digite o valor de A:");
	scanf("%d", &a);
	printf("Digite o valor de B:");
	scanf("%d", &b);
	
	if (a % 2 == 0)
	   num = a + 1;
	else
	   num = a;
	while (num <= b)
	{
		soma += num;
		num += 2;
	}
	printf("Soma = %d", soma);
	
}
