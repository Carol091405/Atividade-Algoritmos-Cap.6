#include <stdio.h>

int main()
{
    int A[10],B[10],i;
    
    printf("Digite os valores da matriz A:\n");
    for(i=0;i<10;i++){
        scanf("%d", &A[i]);
        B[i]=A[i]*(-1);
    }
    printf("Matriz B:\n");
    for(i=0;i<10;i++){
        printf("%d ", B[i]);
    }
    return 0;
}
