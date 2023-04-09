/******************************************************************************

Eduardo Idalgo
Lista Modularização
7. Escreva uma função que retorne o cubo do valor passado como argumento.

*******************************************************************************/
#include <stdio.h>

int retornaCubo(int num) {
    int cubo = num * num * num;
    return cubo; 
}

void main() {
    int num, cubo;
    printf("Entre com um número inteiro para descobrir seu valor ao cubo: \n");
    scanf("%d", &num);
    cubo = retornaCubo(num);
    printf("%d ao cubo é = %d", num, cubo);
//ou
//  printf("%d ao cubo é = %d", num, retornaCubo(num)); 
}
