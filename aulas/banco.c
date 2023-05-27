#include <stdio.h>
void entrada();
int leia();
void operacao();
int main(){
    int escolha=0;
    entrada();
    operacao();
    return 0;
}
void entrada(){
    printf("---------------------- BANCO ----------------------\n");
    printf("Digite o número para realizar as seguintes operações:\n1 - Deposito\n2 - Saque\n3 - Saldo\n4 - Sair\n");
    printf("---------------------------------------------------\n");
}
int leia(){
    int a;
    printf("Digite a operação desejada : ");
    scanf("%d", &a);
    while(a <= 0 || a > 4 ){
        printf("Não existe nenhuma operação com esse número, digite novamente : ");
        scanf("%d",&a);
    }
    return a;
}
void operacao (){
    float valor, saldo = 0;
    int escolha = 0;
    while(escolha != 4){
        escolha = leia();
        switch(escolha){
            case 1:
                printf("Qual valor do seu deposito : R$ ");
                scanf("%f", &valor);
                saldo += valor;
                printf("Operação realizada com sucesso! \n\n\n");
                break;
            case 2:
                printf("Digite o valor que vai ser sacado : R$ ");
                scanf("%f", &valor);
                saldo -= valor;
                printf("Operação realizada com sucesso!\n\n\n");
                break;
            case 3:
            printf("Saldo da conta : R$ %.2f\n\n",saldo);
            break;
        }
    }
}
