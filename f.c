#include <stdio.h>

int main(){
    int A[15],B[15],C[30],i;

    printf("Escreva a matriz C por meio das matrizes A e B:\n");
    for ( i = 0; i < 15; i++)
    {
        printf("Numero %d da matriz A:", i+1);
        scanf("%d", &A[i]);
        C[i]=A[i];
        printf("Numero %d da matriz B:", i+1);
        scanf("%d", &B[i]);
        C[i+15]=B[i];
    }
    printf("\n");
    printf("Resultado da Matriz C:\n");
    for ( i = 0; i < 30; i++)
    {
        printf("%d ", C[i]);
    }
    return 0;
}