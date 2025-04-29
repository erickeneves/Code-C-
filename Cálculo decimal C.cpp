#include <stdio.h>

main()
{
	float c1, c2, l1, l2, per, area;
	
	printf("\nComprimento 1:");
	scanf("%f", &c1);
	
	printf("\nComprimento 2:");
	scanf("%f", &c2);
	
	printf("\nLargura 1:");
	scanf("%f", &l1);
	
	printf("\nLargura 2:");
	scanf("%f", &l2);
	
	per = (c1+c2+l1+l2)*2;
	area = c1, c2*l1, l2;
	
	printf("\nPerimetro = %.2fm \t Area = %.2fm", per, area);
}
