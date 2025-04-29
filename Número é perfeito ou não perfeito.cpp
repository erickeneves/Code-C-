#include <stdio.h>

main()

{
    int num, d, soma=0;
	printf("Digite um numero:");
	scanf("%d", &num);
	
	for (d = 1; d <= num/2; d++)
      if (num % d == 0)
          soma += d;
    if (soma==num)
       printf("\nO total de %d e perfeito", num);
    else
       printf("\nO numero %d nao e perfeito!", num);
	    
}
