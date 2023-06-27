#include <stdio.h>

int main(){
    int A[10],i,j,count=0;
    float m;

    printf("Digite 10 numeros inteiros:\n");
    for ( i = 0; i < 1; i++)
    {
            scanf("%d", &A[i]);
            if (A[i]%2!=0)
            {
                count++;
            }
        
    }
    printf("Quantidade de numeros impares:%d\n", count);
    m=(count/10.0)*100;
    printf("Porcentagem da media dos impares sobre o total:%.2f", m);
    return 0;
}
    
