#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int A[10], i, mv1, mv2;

    srand(time(NULL));

    for (i=0; i<10; i++){
        A[i] = rand() % 100+1;
    }

    printf("\nVetor gerado:");
    for (i=0; i<10; i++){
        printf(" %d", A[i]);
    }

    mv1= mv2 = A[0];

    for (i=1; i<10; i++){
        if (A[i]>mv1) {
            mv2 = mv1;
            mv1 = A[i];
        } else if (A[i]>mv2){
            mv2 = A[i];
        }
    }
    printf("\nDois maiores valores: %d e %d\n", mv1, mv2);
}
