#include <stdio.h>

main()
{
	float sal, val, fin;
	
	printf("Salario fixo do funcionario: R$");
	scanf("%f", &sal);
	
	printf("Valor das vendas: R$");
	scanf("%f", &val);
	
	fin = (sal+val)*0.04;
	
	printf("Valor da comissao: R$%.2f", fin);
	
}
