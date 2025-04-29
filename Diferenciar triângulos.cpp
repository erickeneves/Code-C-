#include <stdio.h>

main()
{
	float a, b, c;
	
	printf("\nDigite a medida do lado A:");
	scanf("%f", &a);
	
	printf("\nDigite a medida do lado B:");
	scanf("%f", &b);
	
	printf("\nDigite a medida do lado C:");
	scanf("%f", &c);
	
	if (a<b+c && b<a+c && c<a+b)
	{
		printf("E um triangulo...\n");
	    if (a==b && a==c)
	        printf("Equilatero!\n");
	    else
	        if (a==b || a==c || b==c)
	        printf("Isosceles!\n");
	    else
	        printf("Escaleno!\n");
	}
	else
	    printf("\nNao e um triangulo!\n");
}
