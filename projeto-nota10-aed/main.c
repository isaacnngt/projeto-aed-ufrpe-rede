#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


int main(){

    //Setando o local para aceitar acentos
    setlocale(LC_ALL,"Portuguese");

    //Vari�veis
    int opcao_principal;

    //Menu Principal
    printf("---------Menu Principal---------\n");
    printf("1. Cadastro \n");
    printf("2. Pesquisa \n");
    printf("Digite o n� da op��o desejada: ");
    scanf("%d", &opcao_principal);

    switch(opcao_principal){
        case 1:
            printf("Voc� est� em Cadastro");
            //Cadastro();
            break;
        case 2:
            printf("Voc� est� em Pesquisa");
            //Pesquisa();
            break;

        }

}
