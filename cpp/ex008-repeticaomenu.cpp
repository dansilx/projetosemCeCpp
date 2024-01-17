#include <stdio.h>

int main(void){

    int opcao;
    do{
        printf("Escolha uma opcao:\n1-Cadastro\n2-Leitura\n3-Edicao\n4-Exclusao\n0-Sair\nDigite a opcao: ");
        scanf("%d",&opcao);
    }while(opcao != 0);

    return 0;
}