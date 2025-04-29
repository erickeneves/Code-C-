#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int A[4][12], i,j, total, ta, maior, sem, s, m;
	char mes[12] [4]= {"JAN","FEV","MAR","ABR","MAI","JUN","JUL","AGO","SET","OUT","NOV","DEZ"};
	
	srand(time(NULL));
	for (i=0; i<4; i++)
	    for (j=0; j<12; j++)
	        A[i][j] = 50 + rand()%50;
	
	printf("\nTabela gerada:\n");
	for (i=0; i<4; i++)
	{
		for (j=0; j<12; j++)
		    printf("%3d", A[i][j]);
		printf("\n");
	}
	ta=0;
	maior=0;
	for (j=0; j<12; j++)
	{
		total = 0;
		for (i=0; i<4; i++)
		    {
		    	total += A[i][j];
		    	if (A[i][j] > maior)
		    	{
		    		maior = A [i] [j];
		    		s = i+1;
		    		m = j;
				}
			}
		
		printf("Total do mes: %s = %d\n", mes[j], total);
		ta+=total;
	}
	printf("\nTotal do ano: %d\n", ta);
	
	printf("\nMaior producao do ano foi de: %d pecas!\n", maior);
	printf("\nOcorreu na %da. semana do mes %s\n", s, mes[m]);
}
