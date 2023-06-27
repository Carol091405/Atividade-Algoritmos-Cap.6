#include <stdio.h>

int main(){
    int A[1][15]={0},i,j,count=0;

    printf("Digite 15 elementos:\n");
    for ( i = 0; i < 1; i++)
    {
        for ( j = 0; j < 15; j++)
        {
            scanf("%d", &A[i][j]);
            if (A[i][j]%2==0)
        {
            count++;
        }
        }
    }
    printf("Quantidade de valores pares:%d", count);
    return 0;
}