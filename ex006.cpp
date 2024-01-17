#include<stdio.h>

int main(void){

    printf("Os 20 primeiros numeros pares sao: \n");

    int par;

    //for (inicializaçao; condição; incrementacao)
    for(int i=0; i<20; i++){
        par = i*2;
        printf("\n%d", par);
    }


    getchar();
    return 0;
}