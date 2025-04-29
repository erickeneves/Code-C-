#include <stdio.h>

main()
{
	int A[4][6], T[6][4], i, j;
	//zerar a matriz inteira
	printf("\nDigite os valores da matriz A (4x6):\n");
	for (i=0; i<4;i++)
	    for (j=0;j<6;j++)
	        scanf("%d", &A[i][j]);
	        
    //calcular/gerar a matriz T
		
	for (i=0; i<6; i++)
	    for (j=0; j<4; j++)
	           T[i][j] = A[j][i];   
    printf("\nMatriz Transposta:\n");
    for (i=0; i<6; i++)
    {
    	for (j=0; j<4; j++)
    	    printf("%3d", T[i][j]);
    	printf("\n");
	}
}
