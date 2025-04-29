#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int contarAcertos(int *vet1, int *vet2, int tamanho) {
    int acertos = 0;
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (vet1[i] == vet2[j]) {
                acertos++;
                break;
            }
        }
    }
    return acertos;
}

int main() {
    int S[6], A[6];
    int i, acertos;

    srand(time(NULL));

    for (i = 0; i < 6; i++) {
        int numero;
        int repetido;

        do {
            numero = rand() % 60 + 1;
            repetido = 0;
            for (int j = 0; j < i; j++) {
                if (S[j] == numero) {
                    repetido = 1;
                    break;
                }
            }
        } while (repetido);
        S[i] = numero;
    }

    printf("Digite 6 n�meros entre 1 e 60 (sem repeti��o):\n");
    for (i = 0; i < 6; i++) {
        int numero;
        int repetido;

        do {
            printf("N�mero %d: ", i + 1);
            scanf("%d", &numero);
            repetido = 0;

            if (numero < 1 || numero > 60) {
                printf("N�mero inv�lido. Deve estar entre 1 e 60.\n");
                repetido = 1;
            } else {
                for (int j = 0; j < i; j++) {
                    if (A[j] == numero) {
                        printf("N�mero repetido. Digite outro.\n");
                        repetido = 1;
                        break;
                    }
                }
            }
        } while (repetido);

        A[i] = numero;
    }

    qsort(S, 6, sizeof(int), compare);
    qsort(A, 6, sizeof(int), compare);

    printf("\nN�meros sorteados: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", S[i]);
    }

    printf("\nSeus n�meros: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", A[i]);
    }

    acertos = contarAcertos(S, A, 6);

    printf("\n\nResultado: ");
    if (acertos == 6) {
        printf("Voc� fez a MEGA-SENA!\n");
    } else if (acertos == 5) {
        printf("Voc� fez a QUINA!\n");
    } else if (acertos == 4) {
        printf("Voc� fez a QUADRA!\n");
    } else {
        printf("Voc� perdeu o jogo.\n");
    }

    return 0;
}
