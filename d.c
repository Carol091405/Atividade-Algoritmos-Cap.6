#include <stdio.h>

int main(){
    int A[15],B[15],i,j;
   
    printf("Digite 15 elementos para a matriz A:\n");
    for (i = 0; i < 15; i++) {
            scanf("%d", &A[i]);
        }

    printf("Matriz A:\n");
    for (i = 0; i < 15; i++) {
            printf("%d ", A[i]);
       }

    printf("Matriz B:\n");
    for (i = 0; i < 15; i++) {
            B[i]=A[i]*A[i];
            printf("%d ", B[i]);
    }
    return 0;
}
    
   