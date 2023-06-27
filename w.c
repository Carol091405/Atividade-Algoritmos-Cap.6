#include <stdio.h>
#include <math.h>

int main(){
    int A[10],B[10],C[10],i;

    printf("Construa as matrizes A e B(10 elementos cada):\n");
    for ( i = 0; i < 10; i++)
    {
        printf("Elemento %d de A:", i+1);
        scanf("%d", &A[i]);
        printf("Elemento %d de B:", i+1);
        scanf("%d", &B[i]);
        C[i]=(int)pow(A[i]+B[i],2);
    }
    printf("\n");\
    printf("Matriz C:\n");
    for ( i = 0; i < 10; i++)
    {
    printf("%d ", C[i]);
    }
    return 0;
}