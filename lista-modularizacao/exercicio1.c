/******************************************************************************

Eduardo Idalgo
Lista Modularização
1. Escreva um programa que implemente uma função
que retorne a diferença entre dois
números inteiros digitados pelo usuário.

*******************************************************************************/
#include <stdio.h>

int retornaDiferenca(int a, int b) {
    return a-b;
}

void main() {
    
    int a, b;
    
    printf("Entre com o valor do primeiro número: ");
    scanf("%d", &a);
    printf("Entre com o valor do segundo número: ");
    scanf("%d", &b);
    
    int diferenca = retornaDiferenca(a, b);
    printf("A diferença de %d e %d é %d", a, b, diferenca);
    
}
