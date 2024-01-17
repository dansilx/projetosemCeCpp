#include <stdio.h>

int main(void){

    int numero;

    printf("Digite um numero: ");

    scanf("%d",&numero);

    if(numero > 10 && numero < 100)
    {
        printf("O numero esta entre 10 e 100");
    }
    else{
        printf("O numero nao esta entre 10 e 100");
    }

    getchar();
    return 0;
}