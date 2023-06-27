#include <stdio.h>

int main(){
    int A[5],B[5],C[5],D[15],i;

    printf("Escreva os elementos da matriz D por meio das matrizes A,B e C:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("Numero %d da matriz A:", i+1);
        scanf("%d", &A[i]);
        D[i]=A[i];
        printf("Numero %d da matriz B:", i+1);
        scanf("%d", &B[i]);
        D[i+5]=B[i];
        printf("Numero %d da matriz C:", i+1);
        scanf("%d", &C[i]);
        D[i+10]=C[i];
    }
    printf("Resultado da Matriz D:\n");
    for ( i = 0; i < 15; i++)
    {
        printf("%d ", D[i]);
    }
    return 0;
}