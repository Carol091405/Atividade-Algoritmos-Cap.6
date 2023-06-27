#include <stdio.h>

int main(){
    int i,j,n[1][10]={};
    char a[100];
    printf("Digite 10 nomes:\n");

    for ( j = 0; j < 10; j++)
    {
        scanf("%s", &a);
    }
    for ( i = 0; i < 1; i++)
    {
        for ( j = 0; j < 10; j++){
            printf("%s", n[j][i]);
        }
    }
    
}