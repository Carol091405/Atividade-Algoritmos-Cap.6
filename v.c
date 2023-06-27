#include <stdio.h>

int main(){
    int A[30],i,imp,count=0;

    printf("Digite 30 elementos inteiros:\n");
    for ( i = 0; i < 30; i++)
    {
        scanf("%d", &A[i]);
        if (A[i]%2==0)
        {
            count++;
        } 
    }
    imp=30-count;
    printf("\n");
    printf("Quantidade de numeros pares:%d\n", count);
    printf("Quantidade de numeros impares:%d", imp);
    return 0;
}