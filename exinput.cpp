#include <stdio.h>

int main(void)
{
    int numero;

    printf("Escreva um numero: \n");
    
    scanf("%d",&numero);

    printf("O numero digitado foi: %d",numero);

    getchar();
    return 0;
}