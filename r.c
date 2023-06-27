#include <stdio.h>

int main(){
    int A[6],B[6],C[6],D[6],i;

    printf("Escreva elementos para as matrizes A e B:\n");
    for ( i = 0; i < 6; i++)
    {
        printf("Elemento %d de A:", i+1);
        scanf("%d", &A[i]);
        printf("Elemento %d de B:", i+1);
        scanf("%d", &B[i]);
        if (A[i]%2==0&&B[i]%2==0&&)
        {
            D[i]=A[i];
        }
        if (A[i]%2!=0&&B[i]%2!=0)
        {
            C[i]=B[i];
        }
        
    }
    
}