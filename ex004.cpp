#include<stdio.h>

int main(void){
    
    printf("Digite um numero: ");

    int numero = 0;
    scanf("%d", &numero);

    if(numero > 10 && numero < 100){
        printf("O numero eh mairo que 10 e menor que 100");
    }
    else{
        printf("O numero esta fora do range escolhido");
    }
    getchar();
    return 0;
}