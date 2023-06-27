#include <stdio.h>

int main(){
    int A[15],B[15],i,c;

    printf("Escreva 15 valores para a matriz A:\n");
    for ( i = 0; i < 15; i++)
    {
        scanf("%d", &A[i]);
    }
    for ( i = 0; i < 15; i++)
    {
        int fat=1;
        for ( c = A[i]; c>=1; c--)
        {
           fat*=c;
        }   
        B[i]=fat;
    }
    printf("Matriz A:\n");
    for ( i = 0; i < 15; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    printf("Matriz B:\n");
    for ( i = 0; i < 15; i++)
    {
        printf("%d ", B[i]);
    }
    return 0;
}
