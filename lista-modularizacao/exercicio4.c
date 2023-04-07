/******************************************************************************

Eduardo Idalgo
Lista Modularização
4. Crie um sistema de caixa eletrônico, utilizando menus (switch) e outros recursos,
que realizam operações financeiras a partir de funções projetadas para tal.
Lembre-se de que o caixa eletrônico é um programa que roda como repetição contínua,
até que o usuário decida encerrar a operação. Operações: Depósito, Saque e Saldo.

*******************************************************************************/
#include <stdio.h>

float saldo = 0.00;

void deposita(float valor) {
    saldo += valor;
    printf("Depósito efetuado com sucesso!\n");
}

void saque(float valor) {
    if(valor > saldo) {
        printf("Saldo insuficiente!\n");
    } else {
        saldo -= valor;
        printf("Saque efetuado com sucesso!\n");
        printf("Saldo atual da conta: R$%.2f\n", saldo);
    }
}

void exibeSaldo() {
    printf("Saldo atual da conta: R$%.2f\n", saldo);
}

void main() {
    float valor;
    int opcao;
    do{
        printf("------------CAIXA ELETRÔNICO------------\n");
        printf("1- Deposito\n");
        printf("2- Saque\n");
        printf("3- Checar saldo\n");
        printf("0- Sair\n");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1:
                printf("Digite o valor do depósito:\nR$");
                scanf("%f", &valor);
                deposita(valor);
                break;
            case 2:
                printf("Digite o valor do saque:\nR$");
                scanf("%f", &valor);
                saque(valor);
                break;
            case 3:
                exibeSaldo();
                break;
            case 0:
                printf("Encerrando o sistema...\n");
                break;
            default:
                printf("Operação inválida\n");
                break;
        }
    } while(opcao != 0);
    
}
