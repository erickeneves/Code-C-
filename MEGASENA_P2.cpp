#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()

{

    int S[6], A[6];
    int i, j, acertos = 0;

    srand(time(NULL));

    for (i=0; i< 6; i++){
        S[i]=rand() % 60+1;
        for (j=0; j<i; j++){
            if (S[i]==S[j]){
                i--;
                break;
            }
        }
    }

    printf("Digite 6 numeros entre 1 e 60:\n");
    for (i=0; i<6; i++){
        scanf("%d", &A[i]);
        if (A[i]<1||A[i]>60){
            i--;
        }
        for (j=0; j<i; j++){
            if (A[i]==A[j]){
                i--;
                break;
            }
        }
    }

    for (i=0; i<6; i++){
        for (j=0; j<6; j++){
            if (S[i]==A[j]){
                acertos++;
                break;
            }
        }
    }

    printf("\nNumeros sorteados: ");
    for (i=0; i<6; i++) printf("%d ", S[i]);

    printf("\nSeus numeros: ");
    for (i=0; i<6; i++) printf("%d ", A[i]);

    if (acertos == 6)
        printf("\n\nVoce fez a MEGASENA!\n");
    else if (acertos == 5)
        printf("\n\nVoce fez a QUINA!\n");
    else if (acertos ==4)
        printf("\n\nVoce fez a QUADRA!\n");
    else
        printf("\n\nVoce perdeu o jogo.\n");
}
