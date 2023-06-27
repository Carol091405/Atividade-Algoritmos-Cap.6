#include <stdio.h>

int main() {
    int A[8],B[8],i;

    printf("Digite os 8 elementos para a matriz A:\n");
    for (i = 0; i < 8; i++) {
        scanf("%d", &A[i]);
        B[i] = A[i]*3;
    }
    printf("\n");
    printf("Matriz B:\n");
    for (i = 0; i < 8; i++) {
        printf("%d ", B[i]);
    }
    return 0;
}
