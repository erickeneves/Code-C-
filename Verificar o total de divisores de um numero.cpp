#include <stdio.h>

main()

{
    int num, d, td=2;
	printf("Digite um numero:");
	scanf("%d", &num);
	
	for (d = 2; d <= num/2; d++)
      if (num % d == 0)
      {
      	td++;
      	break;
	  }
    if (td==2)
       printf("\nO total de %d e primo!", num);
    else
       printf("\nO numero %d nao e primo!", num);
	    
}
