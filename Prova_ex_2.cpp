#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int A[10], i, mv1, mv2;

    srand(time(NULL));

    for (i = 0; i < 10; i++) {
        A[i] = rand() % 100 + 1;
    }

    printf("\nVetor gerado:");
    for (i = 0; i < 10; i++) {
        printf(" %d", A[i]);
    }

    maior1 = maior2 = A[0];

    for (i = 1; i < 10; i++) {
        if (A[i] > maior1) {
            maior2 = maior1;
            maior1 = A[i];
        } else if (A[i] > maior2) {
            maior2 = A[i];
        }
    }
    printf("\nDois maiores valores: %d e %d\n", maior1, maior2);
}
