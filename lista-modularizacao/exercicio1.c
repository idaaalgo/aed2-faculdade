/******************************************************************************

Eduardo Idalgo
Lista Modularização
1. Escreva um programa que implemente uma função
que retorne a diferença entre dois
números inteiros digitados pelo usuário.

*******************************************************************************/
#include <stdio.h>


/*Função retornaDiferenca, receberá dois pârametros(a, b) e irá retornar
a subtração de a e b*/
int retornaDiferenca(int a, int b) {
    return a-b;
}

void main() {
    
    int a, b, diferenca;
//Entrada de dados
    printf("Entre com o valor do primeiro número: ");
    scanf("%d", &a);
    printf("Entre com o valor do segundo número: ");
    scanf("%d", &b);
/*A variável diferenca recebera o retorno da função
retornaDiferenca*/
    diferenca = retornaDiferenca(a, b);
//Saída do programa
    printf("A diferença de %d e %d é %d", a, b, diferenca);
    
}
