#include<stdio.h>

int main(void){
    
    int numero = 0;

    printf("Escreva um numero: ");
    scanf("%d",&numero);
    printf("\nO numero digitado foi: %d",numero);

    //sempre vai ter
    getchar();
    return 0;
}