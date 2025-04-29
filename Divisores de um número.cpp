#include <stdio.h>

main()

{
	int num, d;
	printf("Digite um numero:");
	scanf("%d", &num);
	
	for (d = 1; d <= num; d++)
      if (num % d == 0)
	    printf("%d\t", d);
}
