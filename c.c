#include <stdio.h>

int main(){
    float A[20],B[20],C[20];
    int i;

    printf("Digite os valores da matriz A:\n");
    for (i = 0; i < 20; i++) {
            scanf("%f", &A[i]);
    }
    printf("\n");
    printf("Digite os valores da matriz B:\n");
    for (i = 0; i < 20; i++) {
            scanf("%f", &B[i]);
        }
    printf("\n");
    printf("Matriz C:\n");
    for (i = 0; i < 20; i++) {
            C[i]=A[i]-B[i];
            printf("%.2f ", C[i]);
    }
    return 0;
}