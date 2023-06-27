#include <stdio.h>

int main(){
    int A[10],i,n;

    printf("Digite o numero que deseja conhecer a tabuada:");
    scanf("%d", &n);
    for ( i = 1; i < 11; i++)
    {
        A[i]=n*i;
    }
    printf("Tabuada do numero %d:\n", n);
    for ( i = 1; i < 11; i++)
    {
        printf("%d*%d=%d\n",n,i,A[i]);
    }
    return 0;
}