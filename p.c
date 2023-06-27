#include <stdio.h>

int main(){
    int A[12],B[12],i;

    printf("Digite 12 valores:\n");
    for ( i = 0; i < 12; i++)
    {
        scanf("%d", &A[i]);
        if (A[i]%2!=0)
        {
            B[i]=A[i]*2;
        }
    }
    printf("\n");
    printf("Matriz B:\n");
    for ( i = 0; i < 12; i++)
    {
    printf("%d ", B[i]);
    }
    return 0;
}